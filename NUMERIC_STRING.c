#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char str[100];
int cnt1=0,cnt2=0;
scanf("%s",str);
for(int i=0;str[i]!='\0';i++)
{
if(isdigit(str[i]))
{
cnt1++;
break;
}
}
if(cnt1!=0)
{
printf("yes");
}
else
{
for(int i=0;str[i]!='\0';i++)
{
if(isalpha(str[i]))
{
cnt2++;
break;
}
}
if(cnt2<cnt1)
{
    printf("no");
}
}
}
