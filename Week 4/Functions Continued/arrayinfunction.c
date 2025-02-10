#include <stdio.h>

#define MaxListSize 10000

// When passing functions arrays, they are done slightly differently to normal variables...
int func (int n[100]){
    // function func takes 1 argument, called n.
    // This is an array of integers max zise 100
    printf("This is func");
}

void voided (double d[10], int t){
    // function voided has 2 arguments passed to it...
    // an array of doubles, with a max size of 10
    // and an integer, t
    printf("Welcome to voided");
}

void myfunction (int c, int list[MaxListSize]){
    // Myfunction has 2 variables passed to it, an int, c
    // and a list of integers, of size maxlistsize, which we defined earlier (at the top)
}

int wowfunct (int arr[]);
    // This is the prototype of a function called wowfunct, with no specified size.

int main (){
    int array[100];
    func(array); // Passes array to the function
    double doob[10];
    voided(doob, 5);
    return 1;
}