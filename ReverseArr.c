#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseArr(int *arr, unsigned int size)\
{
    unsigned int j = 0;
    int *temp = malloc(size * sizeof(int));
    memcpy(temp, arr, size * sizeof(int));
    for(int i = size - 1; i >= 0; i--)
    {
        *(arr + j) = *(temp + i);
        j++;
    }
}

void dispArr(int *arr, int size)
{
    printf("elements: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
    printf("\n");
}
int main()
{
    int array[] = {1,2,3,4,5};
    printf("before reversal\n");
    dispArr(array, sizeof(array)/sizeof(int));
    reverseArr(array, sizeof(array)/sizeof(int));
    printf("After reversal\n");
    dispArr(array, sizeof(array)/sizeof(int));
}
