#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    
    printf("Sum of the even number series 2 + 4 + 6 + ... + %d = %d\n", n, sum);
    
    return 0;
}
