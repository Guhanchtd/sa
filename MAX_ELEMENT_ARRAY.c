#include<stdio.h>
#include<conio.h>
void main()
{
int num,a[num],max=0;
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<num;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("%d",max);
}
