#include <stdio.h>

int main()
{

    int num;
    printf("Enter value: ");
    scanf("%d", &num);

    int digit = 1;

    int isEven = 0;

    if (num % 2 == 0)
    {
        isEven = 1;
    }

    for (int rows = 1; rows <= num; rows++)
    {
        for (int cols = 1; cols <= num; cols++)
        {
            printf("%c ", (digit % 2 == 0) ? 'B' : 'W');

            digit++;
        }

        if (isEven)
        {
            digit++;
        }

        printf("\n");
    }

    return 0;
}
