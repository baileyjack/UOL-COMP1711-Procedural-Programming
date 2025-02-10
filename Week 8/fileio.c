// A file is a piece of data on a hard disk
// it's a sequence of bytes which is written to the disk

// using stdio.h, we can import and manipulate files
#include <stdio.h>
void main(){
    typedef struct {} FILE;
    FILE *fp; // this is a file pointer
    // this creates a pointer variable called fp, which can beb made to point to a file structure

    // initialising files:
    // FILE *fopen(const char *filename, const char *mode);
    // where filename is the name of the file in the operation system, and mode is a string which determined the access mode (reading, writing, or both)
    // the fopen function returns NULL if the OS fails to open the file
    fp = fopen ("mMFile.txt", "r"); //r can be swapped with w for writing
    // a can be swapped for r to make the file open in append mode
    if (fp == NULL){
        printf("Cannot Open File\n");
    }
    // reading a file
    int fscanf(FILE *stream, const char *format);
    int getc(FILE *stream);
    // when reading from a file we need to stop reading when the end of the file is reached because otherwise we will get a runtime error

    // writing to a file
    int fprintf(FILE *stream, const char *format);
    int putc(int char, FILE *stream);

    // when finished with a file, we need to close it
    fclose(FILE)

    // fwrite is useful to write an entire array to a file
    size_t fwrite(const void *ptr, size_t size, size_t n_elem, FILE *stream);
    //ptr: A pointer to the array (the array itself).
    // size: This size in bytes of each element in the array.
    // n_elem: The number of elements in the array.
    // stream: A pointer to the file to which the array is to be written.

    // fread can read an entire array from a binary file
    size_t fread (void *ptr, size_t size, size_t n_elem, FILE *stream);
    // where as above

    // file random access
    // in c there are functions for random access to files
    fseek (FILE *stream, long int offset, int position);
    // this is used to move the file pointer associated with a given file to a specific position
    ftell(FILE * stream);
    // used to find out the position of the file pointer with respect to the beginning of the file
    rewine(FILE * stream);
    // function sets the file position to the beginning of the file
}