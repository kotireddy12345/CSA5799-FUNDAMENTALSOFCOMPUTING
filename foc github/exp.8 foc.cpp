#include <stdio.h>

int main() {
    int n, sum = 0, sign = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += sign * i;
        sign = -sign;
    }
    
    printf("Sum of the series 1 - 2 + 3 - 4 + 5 ... + %d = %d\n", n, sum);
    
    return 0;
}
