#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

// Bubble sort
void bubble_sort(int *array, unsigned int size)
{
    int swap_count = 0;
    for(int i = 0; i < size - 1; i++)
    {
        if(array[i] < array[i + 1])
        {
            swap(&array[i], &array[i + 1]);
            swap_count = 1;
        }
    }
    if(swap_count)
    {
        bubble_sort(array, size - 1);
    }
}

// Display Array
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
    int array[] = {2, 3, 2, 2, 1};
    dispArr(array, sizeof(array)/sizeof(int));
    bubble_sort(array, sizeof(array)/sizeof(int));
    dispArr(array, sizeof(array)/sizeof(int));
}
