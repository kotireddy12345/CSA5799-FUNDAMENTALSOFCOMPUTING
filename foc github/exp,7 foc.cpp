#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    
    printf("Sum of the odd number series 1 + 3 + 5 + ... + %d = %d\n", n, sum);
    
    return 0;
}
