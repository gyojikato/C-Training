#include <stdio.h>
#include <stdint.h>

uint8_t isPalindrome(int *array, uint32_t size)
{
    if(size > 1)
    {
        if(array[0] != array[size - 1])
        {
            return 0;
        }
        if(!isPalindrome(&array[1], size - 2))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int array[] = {1, 2, 1, 2};
    if(isPalindrome(array, sizeof(array)/sizeof(int)))
    {
        printf("it is a palindrome\n");
    }
    else
    {
        printf("it is not a palindrome\n");
    }
}
