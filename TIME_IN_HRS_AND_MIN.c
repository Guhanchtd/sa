#include<stdio.h>
#include<conio.h>
void main()
{
int t,hr,rem;
scanf("%d",&t);
if(t>0)
{
hr=t/60;
rem=t%60;
}
printf("%d\t%d",hr,rem);
}
