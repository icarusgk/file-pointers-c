#include <stdlib.h>
#include <stdio.h>

// FILE I/O FUNCTIONS

int main(void)
{
    // The file manipulation functions all live in stdio.h
    // All of them accept FILE * as one of their parameters, except
    // for 'fopen()', which is used to get a file pointer



    // 'fopen()'
    // Opens a file and returns a file pointer to it.
    // Always check the return value != NULL

    FILE *file = fopen("file.txt", "r");
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");

    // 'r' is the operation we use to read information from '*file1'
    // 'a' appends infomation
    // 'w' writes from zero the file

    
    // 'fclose()'
    // Closes the file pointed bu the give file pointers
    // Says we are done reading that file1
    fclose(file1);


    // 'fgetc()'
    // Reads and returns the next character from the file pointed to.
    // Note: The operation of the file pointer passed in as a parameters
    // must be "r" for read

    char ch = fgetc(file1);
    
    // EXAMPLE: cat command
    char ch;
    while (ch = fgetc(file1) != EOF)
    {
        printf("%c", ch);
    }

    // 'fputc()'
    // Writes or appends the specified character to the pointed-to file.
    fputc('!', file1);

    // EXAMPLE: cp command line
    char ch;
    while(ch = fgetc(file1) != EOF)
    {
        fputc(ch, file2);
    }

    // 'fread()'
    // Read <qty> units of size <size> from the file pointed to
    // and stores them in memory in a buffer (usually an array)
    // pointed to by <buffer>.

    // fread(<buffer>, <size>, <qty>, <file pointer>)


    int arr[10];
    // arr is just a pointer as all arrays are
    
    fread(arr, sizeof(int), 10, file);
    // We are reading 40 bytes worth of information from the 
    // file pointed to by ptr and we are storing somewhere where
    // we have set aside 40 bytes worth of memory.

    // DINAMICALLY READING A FILE - The heap
    double *arr2 = malloc(sizeof(double) * 80);
    fread(arr2, sizeof(double), 80, file);

    // When we just have a variable we have to pass the ADDRESS of that
    // variable

    char c;
    fread(&c, sizeof(char), 1, file);

    // 'fwrite'
    // Writes <qty> units of size <size> to the file pointed to by
    // reading them from a buffer (usually an array) pointed to by 
    // <buffer>

    // fwrite(<buffer>, <size>, <qty>, <file pointer>);
    int arr[10];
    fwrite(arr, sizeof(int), 10, file);
    // Now I'm am writing FROM arr, I'm collection the information 
    // and writing it to file FROM THE BUFFER TO THE FILE
}