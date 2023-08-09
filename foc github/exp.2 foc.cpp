#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Even number series from 2 to %d:\n", n);
    
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}
