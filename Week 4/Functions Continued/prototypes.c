#include <stdio.h>
// Function prototypes can be used which solve an issue where 2 functions call each other.
// They can't be on the same line, so one must be above the other. This would usually cause problems,
// But function prototypes avoid this.

void f (int n); // They end with a semicolon
void g (int m); // We define the function body later...

// When the compiler reads the prototype decleration of the function, it has advance 'knowledge'
// That the funtion exists and therefore won't issue an error if the function is later caled before
// the compiler reaches the functions definition

void f (int n){
    printf("This is function F(n)");
    if (n > 2){
    g(n-1);
    }
}

void g (int n){
    printf("This is function G(n)");
    if (n > 1){
        f(n);
    }
}

int main (){
    f(3);
    return 1;
}