#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of the digits is: %d\n", sum);

    return 0;
}
