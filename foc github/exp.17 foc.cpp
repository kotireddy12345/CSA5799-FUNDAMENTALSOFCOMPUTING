#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Digits of %d are: ", num);

    // Extract and print each digit of the number
    while (num != 0) {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }

    printf("\n");

    return 0;
}
