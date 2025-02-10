// Order of operation
x = y = z = 2
// z will be set to 2
// then y will be set to z
// then x will be set to y

void main (int argc, char* argv[])
{
  if (argc != 3)
  {
    printf ("Sorry, I need 2 command line arguments, no more or less\n");
    exit (0);
  }
  printf ("Thank you for passing two arguments to me\n");
  printf ("My name is: %s\n", argv[0]);
  printf ("The first argument is: %s\n", argv[1]); 
  printf ("The second argument is: %s\n", argv[2]); 
}

// inputted by
// test.exe Hello World (passes hello world into the program)