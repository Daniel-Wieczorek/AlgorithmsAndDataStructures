#include <stdio.h>
#include <stdlib.h>

// C style array reallocation on heap

int main()
{
    int *p, *q;

    p = (int *)malloc(5 * sizeof(int));
    for (size_t i = 0; i < 5; i++)
        p[i] = 55;

    q = (int *)malloc(10 * sizeof(int));
    for (size_t i = 0; i < 5; i++)
        q[i] = p[i];

    // deallocate or storage
    free(p);
    // allocate new pointer
    p = q;
    // change var to null
    q = NULL;

    return 0;
}