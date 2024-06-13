void dispArr(int *arr, int size)
{
    printf("elements: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
    printf("\n");
}
