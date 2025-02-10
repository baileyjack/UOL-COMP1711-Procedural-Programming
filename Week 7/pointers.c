// In C, an array decleration alocate a contiguous block of memory locations and makes the array name point to the first location
// Arrays and pointers can therefore be used interchangably

void main (){
    int a[5];
    int *p = a;
    a[0] = 99;
    printf ("%d\n", *p);
    return 0;

// Pointers in C are 'integral types' which means addition, subtraction, multiplication, subtraction, incrementation and decrementation operations can be applied to them
// eg. if p is a pointer to an integer, then p + 1 is the same as p + sizeof(int)

  int a[3] = {5,4,3};
  int *q = q;
  printf ("%u\n" , q);
  printf ("%u\n" , q+1);
  printf ("%u\n" , q+2);
}