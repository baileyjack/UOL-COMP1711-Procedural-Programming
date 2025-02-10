#include <stdio.h>

// Characters are represented as numbers in a computer
// ASCII code is a very common way of doing it
// ASCII starts at 32, and ends at 126.

// nonprinting characters are characters which perform actions which don't print
// such as beeping or moving the cursor back

// Escape characters are used to insers special symbols (\r being a tab)

int main(){
    char myChar = 'a';
    char a;
    scanf("Enter character %c", &a);
    // in scanf. Whitespace before %c tells scanf to ignore whitespace before the character is entered.
    printf("%c %c", myChar, a);
    
    // We can manipulate characters like numbers as they are technically just integers
    myChar + 13; // makes myChar 'n'. a+13
    
    int c = getchar();
    // getchar gets the integer value of a character
    putchar(c);
    // Putchar prints thhe character at integer value c to the screen.

    // NOTE
        // In ascii, we can get the uppercase code of a lowercase character by adding 32, and vice versa
    return 0;
}