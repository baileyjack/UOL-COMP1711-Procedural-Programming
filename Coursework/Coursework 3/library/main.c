
// Name: Jack Bailey
// Username: ed20jab
// Date started: 27 December 2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libraryStructures.h"
#include "library.h"

////
// Code module for main()
// main function takes command line arguments 
// and opens the library menu
// Input: book data filename via command line
// Usage: ./library books.txt 

int main( int argc, char **argv )
{
    char bookFile[40];
    printf("%s", argv[0]);
    //TO DO :
    
    // check that correct number of command line arguments are entered
    if (argc != 2){
    // use the error message
        printf("Error\nExpected use: ./library books.txt\n");
    // exit the application if there is an error
        exit(-1);}
    // assign command line value to filename string
    strcpy(bookFile, argv[1]);
    printf("%s", bookFile);

    // DO NOT ALTER
    // start the system
    printf("\nIntialising library system!\n");
    libraryCLI( bookFile );
    printf("\nClosing library system!\n\n");

    return 0;
}

