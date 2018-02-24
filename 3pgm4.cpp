#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,a[10],temp;
clrscr();
cout<<"Enter any 10 num in array: \n";
for(i=0;i<=10;i++)
{
cin>>a[i];
}
cout<<"Data before sorting: ";
for(j=0;j<10;j++)
{
cout<<a[j];
}
for(i=0;i<=10;i++)
{
for(j=0;j<=10-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
cout<<"Data after sorting: ";
for(j=0;j<10;j++)
{
cout<<a[j];
}
getch();
}
