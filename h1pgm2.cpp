#include<iostream.h>
#include<conio.h>
 void main()
 {
 int i,a[10],temp,k;
 clrscr();
 cout<<"Enter any 10 num in array: \n";
 for(i=0;i<=10;i++)
 {
 cin>>a[i];
 }
 cout<<"\nData before sorting: ";
 for(k=0;k<10;k++)
 {
 cout<<a[k];
 }
 for(i=0;i<=10;i++)
 {
 for(k=0;k<=10-i;k++)
 {
 if(a[k]>a[k+1])
 {
 temp=a[k];
 a[k]=a[k+1];
 a[k+1]=temp;
 }
 }
 }
 cout<<"\nData after sorting: ";
 for(k=0;k<10;k++)
 {
 cout<<a[k];
 }
 getch();
 }
