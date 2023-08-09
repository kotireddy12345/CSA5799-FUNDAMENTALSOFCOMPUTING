4#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Odd natural numbers up to %d:\n", n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
