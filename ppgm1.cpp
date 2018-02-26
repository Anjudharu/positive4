#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100],tempv;
int i,j=0;
clrscr();
cout<<"Enter the string :";
cin>>str[100];
i=0;
j=strlen(str)-1;
while(i<j)
{
tempv=str[i];
str[i]=str[j];
str[j]=tempv;
i++;
j--;
}
cout<<"Reverse string is: "<<str;
getch();
}
