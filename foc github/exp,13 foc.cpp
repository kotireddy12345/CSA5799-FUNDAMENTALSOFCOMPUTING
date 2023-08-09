#include <stdio.h>

int main() {
    int n, num, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num * num * num;
    }

    printf("Sum of cubes of %d numbers is: %d\n", n, sum);

    return 0;
}
