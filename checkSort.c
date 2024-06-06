#include <stdio.h>
#include <stdlib.h>

int checkSort(int *array, int size, unsigned int *sorted)
{
    /* Left side is always lower to all right side */
    for(int i = 0; i < (size - 1); i++)
    {
        for(int j = (i + 1); j < size; j++)
        {
            if(array[i] > array[j])
            {
                printf("i: %d j: %d\n", i, j);
                return 0;
            }
            else if(array[i] == array[j])
            {
                *sorted = 1;
            }
        }
    }
    return 1;

}

int main()
{
    int array[] = {1,2,2,5,7};
    unsigned int sortedFLG = 0;

    if(checkSort(array, sizeof(array)/sizeof(int), &sortedFLG) && sortedFLG)
    {
        printf("SORTED\n");
    }
    else if(checkSort(array, sizeof(array)/sizeof(int), &sortedFLG)) 
    {
        printf("REALLY SORTED\n");
    }
    else
    {
        printf("NOT SORTED\n");
    }
    return 0;
}
