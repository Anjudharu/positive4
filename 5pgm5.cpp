#include<iostream>
using namespace std;
int main()
{
int n,n1=0;
cout<<"enter the number:";
cin>>n;
while(n>0)
{
n=n/10;
n1++;
}
cout<<"the number of digits in a given number is:"<<n1;
}
