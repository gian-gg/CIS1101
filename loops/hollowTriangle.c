#include <stdio.h>

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n");

    for (int rows = 1; rows < num; rows++)
    {

        for (int cols = 1; cols <= num - rows; cols++)
        {
            printf(" ");
        }

        for (int cols = 1; cols <= 2 * rows - 1; cols++)
        {
            printf("%c", (cols == 1 || cols == 2 * rows - 1) ? '*' : ' ');
        }

        printf("\n");
    }

    for (int cols = 1; cols <= num; cols++)
    {
        printf("* ");
    }

    printf("\n\n");

    return 0;
}
