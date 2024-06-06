#include <stdio.h>
#include <stdlib.h>

int goodNeighbours(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i == 0 && array[i] == array[i + 1])
        {
            return 1;
        }
        else if(i == (size - 1) && array[i] == array[i - 1])
        {
            return 1;
        }
        else if(i > 0 && i < size && array[i] == array[i - 1] + array[i + 1])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int array[] = {1,3,1,3,1};
    if(goodNeighbours(array, sizeof(array)/sizeof(int)))
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE");
    }



}
