#include <stdio.h>

// Function declaration
long long power(int base, int exponent);

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %lld\n", base, exponent, power(base, exponent));

    return 0;
}

// Function definition
long long power(int base, int exponent) {
    long long result = 1;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}