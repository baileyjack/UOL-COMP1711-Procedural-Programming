enum Months {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
	int main ()
	{
	enum Months month = Dec;		// month = 12
	month = 17;		// this error will be detected by the compiler
	month = Dce;		// and this error is also detected at compile time
	month = Dec;		// this is good
	if (month == Dec) 
		printf ("Christmas is coming\n");
	printf ("%d\n" , month);  // 12 (not Dec) will be printed because month is just an integer type
	}


//or

typedef enum  {Mon=1 , Tue, Wed, Thur, Fri, Sat, Sun} Days; // Note: Mon=0 by default
int main()
{
  Days day;
  printf ("Enter a day number (Mon = 1, Sun = 7): ");
  scanf ("%i" , &day);
  switch (day)
  {
    case Mon :
      printf ("I hate Monday morning\n");
      break; // to stop falling over the next case
    case Sat :
      printf ("I love Saturday\n");
      break;
    case Sun:
      printf ("	\n");
      break;
    default : // catch remaining cases
      printf ("Work, work, work !");
   }
}
