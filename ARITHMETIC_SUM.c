#include<stdio.h>
#include<conio.h>
void main()
{
int a,no_of_terms,diff,sum;
scanf("%d%d%d",&no_of_terms,&a,&diff);
sum=(no_of_terms*(2*a+(no_of_terms-1)*diff))/2;
printf("%d",sum);
}
