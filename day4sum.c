#include <stdio.h>

// Function declaration
int sum(int, int);

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = sum(a, b);

    printf("Sum = %d\n", result);

    return 0;
}

// Function definition
int sum(int x, int y) {
    return x + y;
}