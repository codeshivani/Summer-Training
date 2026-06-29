// Simple Interest
#include<stdio.h>
int main()
{
    int p,r ,t ;
    float SI ;
    printf("enter principal\n ");
    scanf("%d", &p);
    printf("enter rate\n");
    scanf("%d" , &r);
    printf("enter time ");
    scanf("%d", &t) ;   

SI = ( p* r * t)/100.00 ;

printf("calculate SI=%.2f", SI);

return 0 ;

}
