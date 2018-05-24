#include<iostream>
using namespace std;
int main()
{
int n,a,a1,b,b1;
cout<<"enter the number:";
cin>>n;
a=n%10;
a1=n/10;
if((a%2)!=0)
cout<<a;
b=a1%10;
b1=a1/10;
if((b%2)!=0)
cout<<b;
}
