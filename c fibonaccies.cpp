#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of even natural numbers up to %d is: %d\n", n, sum);
    
    return 0;
}

