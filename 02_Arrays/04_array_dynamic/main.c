#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size, length;
};

void Display(struct Array arr)
{
    printf("\nElements of the array:\n");

    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

int main()
{
    struct Array arr;
    printf("Enter size of an array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers: ");
    int n;
    scanf("%d", &n);

    arr.length = n;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);

    Display(arr);

    return 0;
}