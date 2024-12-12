#include <stdio.h>

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n");

    for (int rows = 1; rows <= num; rows++)
    {

        for (int cols = 1; cols <= num; cols++)
        {
            printf("%c ", (rows == 1 || rows == num || cols == 1 || cols == num) ? '0' : ' ');
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
