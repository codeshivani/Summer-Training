#include<stdio.h>
int main()
{
int a, b, c ;
printf("enter a and b");
scanf("%d%d" ,&a, &b);

c = a ;
a = b ;
b = c ;
printf(" After swapping");
printf("a=%d",a);
printf("b=%d", b);
return 0 ;
}



