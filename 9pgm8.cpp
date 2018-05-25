#include<iostream>
usung namespace std;
int main()
{
int a,b;
cout<<"enter two numbers:";
cin>>a>>b;
if((a==0)||(b==0))
return 0;
if(a==b)
return a;
if(a>b)
return gcd(a-b,b);
return gcd(b-a,a);
int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}
 cout<<gcd(a,b);
 }
