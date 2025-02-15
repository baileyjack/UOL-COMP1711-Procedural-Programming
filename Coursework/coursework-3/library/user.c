#include <stdio.h>
#include <stdlib.h>

#include "libraryStructures.h"
#include "user.h"
#include "utility.h"

////
// Code module for the library user
// They can look for available books,
// borrow and return books

// List the books that are available to borrow
// Input
// bookList - the array of Book structures
// numBooks - the number of books

 void listAvailableBooks( Book *bookList, int numBooks ) {

  // TO DO :  
  int i;
  for(i = 0; i < numBooks; i++){
    if (bookList[i].available == 1){
    printf("%i - %s - %s", i, bookList[i].author, bookList[i].title);}
  }
  // print out available books with format "list number - author - title" on each lin
  
  return;}

// Borrow a book 
// Input
// theUser - user data structure
// bookList - the array of Book structures
// numBooks - the number of books
// maxBorrowed - max books we can borrow

void borrowBook( User *theUser, Book *bookList, int numBooks, int maxBorrowed ) {

  // TO DO :  
if (theUser->numBorrowed >= maxBorrowed){
  printf("You have to return a book before you can borrow another\n");
  return;}

printf("Which Book? (number): ");
int booktoborrow;
scanf("%i", &booktoborrow);
if (booktoborrow > numBooks)
  {
    printf("Error\nInvalid choice\n");
    return;
}
if (bookList[booktoborrow].available == 0)
{
  printf("Book is not available\n");
  return;
}
  // borrow the book, update the data structures
  
  theUser->borrowed[theUser->numBorrowed] = &bookList[booktoborrow];
  bookList[booktoborrow].available = 0;
  theUser->numBorrowed ++;
  return; 
}

// List books I have borrowed 
// Input
// theUser - user data structure
// bookList - the array of Book structures
// maxBorrowed - max books we can borrow

void listMyBooks( User *theUser, Book *bookList, int maxBorrowed ) {

  // TO DO :  
  int i;
  for (i = 0; i < theUser->numBorrowed; i++){
    printf("%i - %s - %s", i, theUser->borrowed[i]->author, theUser->borrowed[i]->title);
  }
  // list my books in format "number - author - title"

  return;
}

// Return a book 
// Input
// theUser - user data structure
// bookList - the array of Book structures
// numBooks - the number of books
// maxBorrowed - max books we can borrow

void returnBook( User *theUser, Book *bookList, int numBooks, int maxBorrowed ) {

  if (theUser->numBorrowed == 0){
  printf("Error\nYou have not borrowed any books\n");
  return;}
  printf("Which book? (number):");
  int booktoReturn = optionChoice();
  if (booktoReturn > theUser->numBorrowed || booktoReturn < 0){
    printf("Error\nInvalid choice\n");
    }
  else{
    theUser->borrowed[booktoReturn]->available=1;
    for (int i = booktoReturn -1; i < theUser->numBorrowed-1; i++){
    theUser->borrowed[i] = theUser->borrowed[i+1];
    }
    theUser->numBorrowed--;
  }
  return;
}

// DO NOT ALTER THIS FUNCTION

// Menu system for library user

void userCLI( Library *theLibrary ) {
    int userLoggedIn = 1;
    int option;

    while( userLoggedIn ){
        printf("\n User options\n 1 List available books\n 2 Borrow book\n 3 Return book\n 4 Log out\n Choice:");
        option = optionChoice();

        if( option == 1 ) {
            printf("\nList available books:\n");
            listAvailableBooks( theLibrary->bookList, theLibrary->numBooks );
        }
        else if( option == 2 ) {
            printf("\nBorrow book from library:\n");
            listAvailableBooks( theLibrary->bookList, theLibrary->numBooks );
            borrowBook( &(theLibrary->theUser), theLibrary->bookList, theLibrary->numBooks, theLibrary->maxBorrowed );
        }
        else if( option == 3 ) {
            printf("\nReturn book from my list:\n");
            listMyBooks( &(theLibrary->theUser), theLibrary->bookList, theLibrary->maxBorrowed );
            returnBook( &(theLibrary->theUser), theLibrary->bookList, theLibrary->numBooks, theLibrary->maxBorrowed );
        }
        else if( option == 4 ) {
            userLoggedIn = 0;
            printf("\nLogging out\n");
        }
        else
            printf("\nUnknown option\n");
    }
    return;
}

