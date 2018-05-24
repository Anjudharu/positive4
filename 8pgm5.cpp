#include<iostream>
void main()
{
char str[100];
int m,len;
cin>>str[100];
len=strlen(str);
if(len%2!=0)
{
m=len/2;
str[m]='*';
cout<<str;
}
else
{
m=len/2;
str[m]='*';
str[m-1]='*';
cout<<str;
}
return 0;
}
