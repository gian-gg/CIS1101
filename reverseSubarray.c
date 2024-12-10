#include <stdio.h>
#define MAX 100

void reverseSubarray(int *, int, int);

int main()
{

    int array[MAX];
    int *pArray = array;

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", pArray + i);
    }

    int start, end;
    printf("Enter the start index of the subarray: ");
    scanf("%d", &start);
    printf("Enter the end index of the subarray: ");
    scanf("%d", &end);

    printf("Before reversal: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(pArray + i));
    }

    reverseSubarray(pArray, start, end);

    printf("\nAfter reversal: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(pArray + i));
    }

    return 0;
}

void reverseSubarray(int *pArray, int start, int end)
{

    for (int i = 0; i < (end - start) - i; i++)
    {
        int temp = *(pArray + start + i);
        *(pArray + start + i) = *(pArray + end - i);
        *(pArray + end - i) = temp;
    }
}