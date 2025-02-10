// each running program has 2 different areas of memory allocated to it
// the first is a STACK area, which contains the local variables of functions
// the second is a HEAP area, which contains dynamically allocated variables (like with malloc)
// variables in the stack are automatically removed rfom memory when a function ends
// Variables created in the HEAP are NOT automatically removed when the function ends
void main{
    float *p;
    p = (float *) malloc (sizeof(float));
    *p = 3.14;
    // when we no longer need p, we need to free it
    free (p);
}
// if we forget to free a dynamic variable, the location will remain reserved in the heap
// this leads to a leak (reduction) in the available memory
// once freed, we also can't assign something to p afterwards or we will have a dangling pointer issue

// we can make pointers to structs
// and we can use them to link lists, like trees and graphs

A pointer is a variable that contains the address of another variable.
There are two ways to assign an address to a pointer
Using the address operator (&), or
Using the malloc and sizeof functions
We access the value that a pointer is pointing to using the dereference operator (*)
the stack segment in memory contains the local variables of C functions
The heap area contains dynamically allocated variables
Memory leak occurs when the programmer forgets to free a dynamic variable
A dangling pointer occurs when the programmer frees a dynamic variable then try to access it through a pointer
