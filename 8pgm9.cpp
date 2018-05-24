#include<iostream>
using namespace std;
int main()
{
int x,i;
cout<<"enter the number:";
cin>>x;
for(i=0;i<=x;i++)
{
if(x=i*i)
{
cout<<"the number is a perfect square";
}
else
{ cout<<"is not a perfect square";
}
}
return 0;
}
