#include<iostream>
using namespace std;
int main()
{
int n,f1=0,f2=1,f3=1;
cout<<"enter the limit:";
cin>>n;
cout << "The Fibonacci Series is follows:"<<endl<<f1<<" "<<f2<<" ";
while (f1+f2<n)
{
f3 = f1+f2;
f1 = f2;
f2 = f3;
cout<< f3 << " ";
}
cout << endl; 
    return 0;
}
