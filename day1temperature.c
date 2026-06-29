#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("enter celsius temp");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("show fahrenheit temp=%.2f\n", fahrenheit);

    return 0;
}