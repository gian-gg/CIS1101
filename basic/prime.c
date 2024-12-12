#include <stdio.h>

int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Prime Numbers until %d:\n", number);
    for(int i = 2; i <= number; i++) {
        int flag = 1;

        for(int j = 2; j*j <= i; j++) {
            if (i%j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("%d ", i);
        }
    }

    return 0;
}