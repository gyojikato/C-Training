#include <stdio.h>
#include <stdlib.h>

#define num1 *(ptr + i)
#define num2 *(ptr + (i + 1))
int returnMax(int *ptr, int size)
{
    int i = 1;
    int max = *ptr;
    while(i < (size))
    {
        if(max > *(ptr + i))
        {
            max = max;
        }
        else
        {
            max = *(ptr + i);
        }
     i++;   
    }
    return max;
}
int main()
{
    int array[] = {91, 4, 2, 1, 2, 1, 34};
    printf("max: %d", returnMax(array, sizeof(array)/sizeof(int)));
}
