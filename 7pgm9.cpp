#include<iuostream>
using namespace std;
int main()
{
int n1,n2,n;
cout<<"enter two numbers n1 and n2:";
cin>>n1>>n2;
n=n1-n2;
if((n==0)&&(n%2==0))
{
cout<<"even";
}
else
{
cout<<"odd";
}
}
