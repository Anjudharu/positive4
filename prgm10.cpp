#include<iostream.h>
#include<conio.h>
void main()
{
int num,n=0;
clrscr();
cout<<"Enter any number : ";
cin>>num;
while(num>0)
{
num=num/10;
n++;
}
cout<<"\n no. of digits in given number is: "<<n;
getch();
}
