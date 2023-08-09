#include<stdio.h>
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    printf("Sum of the array: %d\n", sum);

    return 0;
}
