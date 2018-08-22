#include<stdio.h>
#include<conio.h>
void main()
{
int num,a[num];
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<num;i++)
{
printf("\n%d\t%d",a[i],i);
}
}

