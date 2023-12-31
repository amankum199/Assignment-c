/*Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i = 0, size = 0, sum = 0;
    printf("Enter the size : ");
    scanf("%d", &size);
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed..");
        return 0;
    }
    printf("The entered %d values \n", size);
    printf("Enter the number\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("Sum is %d \n ", sum);
    free(ptr);
    return 0;
}