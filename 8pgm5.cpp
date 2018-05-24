#include<iostream>
void main()
{
char str[100];
int m,l;
cin>>str[100];
l=strlen(str);
if(l%2!=0)
m=l/2;
str[m]='*';
cout<<str;
else
m=l/2;
str[m]='*';
str[m-1]='*';
cout<<str;
}
return 0;
}
