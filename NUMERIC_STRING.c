#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char str[100];
int cnt=0;
scanf("%s",str);
for(int i=0;s[i]!='\0';i++)
{
if(isdigit(str[i]))
{
cnt++;
break;
}
}
if(cnt!=0)
{
printf("yes");
}
else
{
printf("no");
}
}
