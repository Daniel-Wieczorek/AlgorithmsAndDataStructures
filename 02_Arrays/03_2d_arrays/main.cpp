#include <iostream>

int main()
{
    // Array of pointers - v1
    int *B[3];

    for (size_t i = 0; i < 3; i++)
        B[i] = (int *)malloc(4 * sizeof(int));

    // Array of pointers - v2, double pointers
    int **C;
    C = (int **)malloc(3 * sizeof(int *));

    for (size_t i = 0; i < 3; i++)
        C[i] = (int *)malloc(4 * sizeof(int));

    return 0;
}