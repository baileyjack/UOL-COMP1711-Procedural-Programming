// Character arrays are 1D arrays whose elements are characters
char s[10] = {'H', 'E', 'L', 'L', 'O'};
// This cretes an array of size 10, and initiallises the first 5 items as H E L L O
// Strings are actually arrays of characters
// The difference between a string and a character array is that a string usually ends with the \0 character.
// This is crucial to allow us to manipulate strings
// When reading and printing strings, we can use the %s modifier
char t[5] = "Hello";
printf("%s", t);

char s[100];
scanf ("%s", s);

//String
strcpy(s1, s2);
    // Copies string s2 into string s1. s1 should have enough space for all the chars in s2 (and the terminating \0)
strcat(s1, s2);
    // Concatenates string s2 onto the end of string s1. s1 should have enough space for all the chars in s1 and s2 (and the terminating \0). The function also retunrs a pointer to the resulting string (i.e. s1).
strlen(s);
    // Returns the length of string s
strcmp(s1, s2);
    // Returns 0 if s1 and s2 are the same; less than 0 if s1<s2 (lexicographically); greater than 0 if s1>s2.
strchr(s, ch);
    // Returns a pointer to the first occurrence of the character ch in the string s
strstr(s1, s2);
    // Returns a pointer to the first occurrence of string s2 in string s1
