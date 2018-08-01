#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
scanf("%d",&num);
while(num>0)
{
num=num/10;
count++;
}
if(count!=0)
printf("%d",count);
}
