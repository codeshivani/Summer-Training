#include<stdio.h>
int main()
{
int num;
printf("entetr a num");
scanf("%d" ,&num);
if(num<0)
{printf("num is negative");
}
else if(num>0)
{printf("num is positive");
}
else
{printf("num is zero");
}
return 0 ;

}