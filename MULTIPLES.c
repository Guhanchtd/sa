#include<stdio.h>
#include<conio.h>
void main()
{
int num,res,target=5;
scanf("%d",&num);
for(int i=1;i<=target;i++)
{
res=num*i;
printf("\t%d",res);
}
}

