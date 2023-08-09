#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd natural numbers up to %d is: %d\n", n, sum);
    
    return 0;
}
