// In a simple way, the computer's memory is a collection of locations.
// Each location has a unique address to distinguish it from others
// One piece of data can be stored at each address

// The size of one location in physical memory is dependant on the computer you're using
// it can be
    /*
    8 bit
    16 bit
    24 bit
    32 bt
    64 bit
    128 bit
    */
// We don't care about this though...

// We use an array of 1 byte locations, with each location having it's own address.
// We call this the logical memory model
// in C, we use the address operator & to point to a location in memory
scanf("%i", &a);
// The & is put before a variable name to extract it's memory address


// A pointer variable is a variable which contains the address of another variable
// In C we define a pointer by...
int* p;
// we read this as 'p is a pointer to a function'
int i;
p = &i;
// here, we say that p is the address of integer i

p = (int *) malloc (4);
// malloc allocared a block of memory for a required number of bytes
// it returns the address of the first byte in this block
// malloc returns to void if we don't tell it to return to (an integer)

p = (int *) malloc (sizeof(int));
// The sizeof operator ISNT a function.
// We give the type name and it returns the size in bytes of the type as an unsigned int
// The size of a type differs from one platform to another

// malloc creates nameless variables, how can we access a nameless variable through it's address
*; // is the dereference operator

int *p //*p is read, 'declare p is a pointer to an integer variable
p = (int *) malloc (sizeof (int));
*p = 23; // 23 is assigned to the variable pointed at by p
// or... read p and assign the value 23 to the variable pointed at by p