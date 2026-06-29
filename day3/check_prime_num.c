#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("Enter a num");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("Prime num");
else
printf("Not a prime num");
return 0;
}
