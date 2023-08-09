#include <stdio.h>

int main() {
    int n, num;
    double sum = 0.0, average;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = sum / n;

    printf("Sum of %d numbers is: %.2f\n", n, sum);
    printf("Average of %d numbers is: %.2f\n", n, average);

    return 0;
}
