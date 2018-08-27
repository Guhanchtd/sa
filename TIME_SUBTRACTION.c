#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int num1,num2,a[num1],b[num2],k[2],i;
scanf("%d%d",&num1,&num2);
for(i=0;i<num1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num2;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<2;i++)
{
k[i]=abs(a[i]-b[i]);
printf("%d\t",k[i]);
}
}
