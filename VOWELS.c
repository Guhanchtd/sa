#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("Vowel");
  else
    printf("Consonant");
  if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'||ch=='('||ch==')'||ch=='/'||ch=='\')
     printf("invalid");
