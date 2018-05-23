#include<iostream>
using namespace std;
int main()
{
int n,a,b,c,d,sum;
cout<<"enter the number:";
cin>>n;
a=n%10;
b=n/10;
c=b%10;
d=b/10;
sum=a+c+d;
cout<<sum;
}
