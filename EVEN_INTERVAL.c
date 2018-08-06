#include<stdio.h>
#include<conio.h>
void main()
{
int input1,input2;
scanf("%d%d",&input1,&input2);
for(int i=input1+1;i<input2;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
}
