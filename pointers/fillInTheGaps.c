#include <stdio.h>
#define MAX 100

int *sortElements(int arr[], int size);
void determineGaps(int arr[], int size);

int main(void)
{
    int aFound[MAX];
    int *found = aFound;

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int count = 0;
    for (; number != 0; count++)
    {
        *(found + count) = number % 10;
        number /= 10;
    }

    printf("Foundation Codes:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\t", *(found + i));
    }

    int *ptr1, i;
    ptr1 = sortElements(found, count);
    printf("\nSorted Codes:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t", found[i]);
    }

    determineGaps(ptr1, count);
    return 0;
}

int *sortElements(int arr[], int size)
{

    for (int pass = 0; pass < size - 1; pass++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (*(arr + i) > *(arr + i + 1))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + i + 1);
                *(arr + i + 1) = temp;
            }
        }
    }

    return arr;
}

void determineGaps(int arr[], int size)
{

    int gaps[MAX];
    int count = 0;

    if (!size)
    {
        ++size;
    }

    for (int number = 0; number < 10; number++)
    {
        int flag = 1;
        for (int i = 0; i < size; i++)
        {
            if (number == *(arr + i))
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            gaps[count] = number;
            count++;
        }
    }

    printf("\nGaps:\n");
    int i;
    for (i = 0; i < count; i++)
    {
        printf("%d\t", gaps[i]);
    }
}