#include<stdio.h>
#include<conio.h>
void main()
{
int num,arr[num],temp=0;
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i,numi++)
{
for(int j=0;j<num;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
temp=arr[j];
}
}
}
for(int i=0;i<num;i++)
{
printf("%d",arr[i]);
}
}
