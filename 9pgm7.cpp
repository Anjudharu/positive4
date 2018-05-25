#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter two numbers:";
cin>>a>>b;
if(a==b)
return a;
if(a==0)||(b==0))
return 0;
if(a>b)
return gcd(a-b,b);
return gcd(a,b-a);
cout<<gcd(a,b);
return 0;
}
