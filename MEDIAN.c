#include<stdio.h>
#include<conio.h>
void main()
{
int num,a[num],temp=0;
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<num;i++)
{
for(int j=i+1;j<num;j++)
{
if(a[i]>a[j+1])
{
  temp=a[i];
  a[i]=a[j+1];
  a[j+1]=temp;
}
}
}
float median=0;
if(num%2!=0)
{
median=a[(num-1)/2]+a[num/2];
}
else
{
median=a[num/2];
}
printf("%f",median);
}
