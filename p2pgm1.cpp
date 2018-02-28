#include<iostream>
#include<conio.h>
void main()
{
int n;
clrscr();
cout<<"enter the day of the week:";
cin>>n;
switch(n)
{
case 1:
cout<<"sunday";
cout<<"holiday";
break;
case 2:
cout<<"monday";
cout<<"not a holiday";
break;
case 3:
cout<<"tuesday";
cout<<"not a holiday";
break;
case 4:
cout<<"wednesday";
cout<<"not a holiday";
break;
case 5:
cout<<"thursday";
cout<<"not a holiday";
break;
case 6:
cout<<"friday";
cout<<"not a holiday";
break;
case 7:
cout<<"saturday";
cout<<"holiday";
break;
}
return 0;
}
