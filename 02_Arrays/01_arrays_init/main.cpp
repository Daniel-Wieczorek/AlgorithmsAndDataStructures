#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5] = {2,4,6,8,10};
    int *p;
    int i;

    // C style aray init for heap
    p = (int*)malloc(5*sizeof(int));

    // C style for loop
    for(int i=0; i<5;i++)
        printf("%d ", A[i]);

    return 0;
}