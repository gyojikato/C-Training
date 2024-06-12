#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void freqCnt(int *array, unsigned int size)
{
    for(int i = 0; i < size; i++)
    {
        bool clear_left_FLG = 1;
        for(int j = i - 1; j >= 0; j--)
        {
            if(array[i] == array[j])
            {
                clear_left_FLG = 0;
                break;
            }
        }
        if(clear_left_FLG)
        {
            int count = 1;
            for(int j = i + 1; j < size; j++ )
            {
                if(array[i] == array[j])
                {
                    count++;
                }
            }
            printf("number %d appears %d times!\n", array[i], count);
        }
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    freqCnt(array, sizeof(array)/sizeof(int));

    return 0;
}
