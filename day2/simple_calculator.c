#include<stdio.h>
int main()
{
float num1, num2 ;
char opr ;
printf("enter operator( +, -, *, /)");
scanf("%c", &opr);
printf("enter num1 and num2");
scanf("%f %f", &num1,&num2);
switch(opr)
{
case '+':
printf("result=%.2f", num1+num2);   break;
case '-':
printf("result=%.2f",num1-num2);   break;
case '*' :
printf("result=%.2f",num1*num2);   break;
case '/':
if(num2!=0 )
printf("result=%.2f", num1/num2);   
else
printf("error");    break;
 default:
 printf("invalid operator");
}

return 0 ;

}