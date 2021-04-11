#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int m;
    int *a;
    int *b = malloc(sizeof(int));

    a = &m;
    a = b;
    m = 10;
    *b = m + 2;

    free(b);

    // Once you free memory, and then try to access it, 
    // can result in unpredictable behavior


}