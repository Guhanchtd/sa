#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,rem,power,cnt=0,sum=0,g;
scanf("%d",&n);
g=n;
while(n!=0)
{
n=n/10;
cnt++;
}
if(cnt!=0)
{
while(n!=0)
{
rem=n%10;
n/=10;
power=pow(rem,cnt);
sum=sum+power;
}
}
if(sum==g)
{
    printf("yes");
}
else
{
    printf("no");
}
}







