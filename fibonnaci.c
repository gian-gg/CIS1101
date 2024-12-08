#include <stdio.h>

int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int a = 0, b = 1, c;
    printf("First %d numbers of the Fibonacci Sequence:\n", number);
    for(int i = 0; i < number; i++) {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}