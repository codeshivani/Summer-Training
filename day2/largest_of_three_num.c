#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three num");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("largest num=%d\n", a);
    else if (b >= a && b >= c)
        printf("largest num=%d\n", b);
    else
        printf("largest num=%d", c);

    return 0;
}
