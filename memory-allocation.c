#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get an integer from the user
    int x = get_int("x: ");

    // array of floats on the stack
    float stack_array[x]; // x is the size of the array


    // array of float on the heap
    float *heap_array = malloc(x * sizeof(float));
    
    // malloc returns an address
}