#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


double getAveRec(int *array, uint32_t size)
{
    double currSum = 0, nextNum;
    if(size == 1)
    {
        return array[0];
    }
    else
    {
        currSum =  getAveRec(&array[1], size - 1);
        currSum = (currSum * (size - 1) + array[0] ) / (size);
        return currSum;
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    printf("average: %f", getAveRec(array, sizeof(array)/sizeof(int)));
    double average;
    average = getAveRec(array, 3); 
}
