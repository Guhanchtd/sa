#include<stdio.h>
#include<conio.h>
void main()
{
int num;
scanf("%d",&num);
  if(num%2==0)
    printf("Even");
  else
    printf("Odd");
  if(num<0)
    printf("invalid");
}
