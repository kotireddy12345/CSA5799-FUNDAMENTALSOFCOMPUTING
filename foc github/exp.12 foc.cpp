#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i * i;
    }

    printf("Sum of squares of odd numbers up to %d is: %d\n", n, sum);

    return 0;
}
