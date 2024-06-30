#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t isChgngSigns(int *array, uint32_t size)
{
    if(size > 1)
    {
        if(array[0] >= 0 && array[1] < 0)
        {
            if(!isChgngSigns(&array[1], size - 1))
            {
                return 0;
            }
        }
        else if(array[0] < 0 && array[1] >= 0)
        {
             if(!isChgngSigns(&array[1], size - 1))
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int array[] = {-1, -2, 3, -1, 2, -1};
    if(isChgngSigns(array, sizeof(array)/sizeof(int)))
    {
        printf("signs are changing");
    }
    else
    {
        printf("signs are not changing");
    }
}
