#include <stdio.h>
#include <stdlib.h>

int checkSort(int *array, int size)
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
        }
    }
    return 1;

}

int main()
{
    int array[] = {1,2,2,5,1};

    if(checkSort(array, sizeof(array)/sizeof(int)))
    {
        printf("SORTED\n");
    }
    else
    {
        printf("NOT SORTED\n");
    }
    return 0;
}
