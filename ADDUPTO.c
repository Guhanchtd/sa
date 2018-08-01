#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[n],k,sum=0;
scanf("%d%d",&n,&k);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<=k;i++)
{
sum=sum+arr[i];
}
printf("%d",sum);
}
