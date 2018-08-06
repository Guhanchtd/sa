#include<stdio.h>
#include<conio.h>
void main()
{
int given_num,rev_num=0,rem,num;
scanf("%d",&num);
given_num=num;
while(num!=0)
{
rem=num%10;
rev_num=rev_num*10+rem;
num=num/10;
}
if(given_num==rev_num)
{
printf("yes");
}
else{
printf("no");
}

