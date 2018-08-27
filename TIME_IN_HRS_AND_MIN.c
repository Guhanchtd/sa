#include<stdio.h>
#include<conio.h>
void main()
{
int t,hr,rem;
scanf("%d",&t);
if(t>0)
{
hr=t/10;
rem=t%10;
}
printf("%d\t%d",hr,rem);
}
