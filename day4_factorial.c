#include <stdio.h>

// Function declaration
long long factorial(int n);

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %lld\n", num, factorial(num));

    return 0;
}

// Function definition
long long factorial(int n)
{
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}