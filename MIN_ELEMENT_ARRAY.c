#include<stdio.h>
#include<conio.h>
void main()
{
int num,a[num],min=0;
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<num;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("%d",min);
}
