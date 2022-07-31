#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size, length;
};

void Display(struct Array arr)
{
    printf("\nElements of the array:\n");

    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}

void Delete(struct Array *arr, int index)
{
    if (index >= 0 && index <= arr->length)
    {
        // shift all elements
        for(int i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
    }
}

int main()
{
    struct Array arr = {
        {2, 3, 4, 5, 6},
        20,
        5};

    Append(&arr, 99);
    Insert(&arr, 0, 100);
    Display(arr);
    Delete(&arr, 1);
    Display(arr);

    return 0;
}