void swap (int a , int b){
  int t = a;
  a = b;
  b = t;} // t is used as a temporary variable

void swapagain (int *a , int *b)
{
int t = *a;
*a = *b;
*b = t; } // here, the parameters are directly changed as opposed to a sopy of them.
// It gets the actual value of the parameter changed in the calling function instead of getting a copy of that value.

void main () {
  int x = 1,y = 2;
  printf ("x=%d , y=%d \n" , x, y);
  swap (x,y); // Swaps the values in a and b
  printf ("x=%d , y=%d \n" , x, y);
  }


//