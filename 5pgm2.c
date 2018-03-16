#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char f[100],s[100];
int flag=0;
clrscr();
printf("Enter first string:- ");
gets(f);
printf("Enter second string:- ");
gets(s);
for(i=0;first[i]!='\0';i++)
{
if(f[i]==s[i])
 {
  flag=1;
 }
 else
 {
  flag=0;
 }
}
if(flag==1)
{
 printf("Entered string is equal");
printf("the string is:%d",f);
}
else
{
printf("Entered string is not equal");
}
getch();
}
