#include<iostream>
using namespace std;
int main()
{
int n,rev=0,rem;
cout<<"enter the integer:";
cin>>n;
while(n!=0)
{
rem=n%10;
re=rev*10+rem;
n=n/10;
}
cout<<rev;
return 0;
}
