#include <stdio.h>

void arrayMedian(int *, int);

int main()
{

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];
    int *pArray = array;

    printf("Enter elements of the array:\n");
    int i = 0;
    while (i < size)
    {
        printf("[%d] = ", i);
        scanf("%d", pArray + i);

        i++;
    }

    arrayMedian(pArray, size);

    return 0;
}

void arrayMedian(int *pArray, int size)
{

    printf("\n");
    if (size % 2 == 0)
    {
        printf("Medians: %d and %d", *(pArray + (size / 2) - 1), *(pArray + (size / 2)));
    }
    else
    {
        printf("Median: %d", *(pArray + (size / 2)));
    }
}