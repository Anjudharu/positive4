#include<iostream>
using namespace std;
int main()
{
int i,min,max,arr[10],size;
cout<"enter the size of array:";
cin>>size;
for(i=0;i<size;i++)
{
cout<<"the elements:"<<i;
cin>>arr[i];
}
min=arr[0];
max=arr[0];
if(arr[i]<min)
{
min=arr[i];
}
else if(arr[i]>max)
{
max=arr[i];
}
cout<<"highest number="<<max;
cout<<"lowest number="<<min;
}
