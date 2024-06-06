#include <stdio.h>
#include <stdlib.h>

int sumArray(int *arr, unsigned int size)
{
    int sum = 0, i = 0;
    while(i < size)
    {
       sum = sum + arr[i]; 
       i++;
    }
    return sum;
}
double returnAve(int *arr, unsigned int size)
{ 
    return (double)(sumArray(arr, size)) / size;
}
int main()
{
    int array[] = {91, 4, 2, 1, 2, 1, 34};
    printf("Average: %f\n", returnAve(array, sizeof(array)/sizeof(int)));
}
