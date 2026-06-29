#include<stdio.h>
int main()
{
float marks;
printf("enter marks(0-100)");
scanf("%f",&marks);
if(marks>=80 && marks<=100)
printf("grade A");
else if(marks>=60)
printf("grade B");
else if (marks>=40)
printf("grade C");
else if("marks>=20")
printf("grade D");
else if ("marks>=0")
printf("grade Fail");
return 0 ;


}