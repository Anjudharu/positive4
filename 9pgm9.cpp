#include<iostream>
using namespace std;
int main()
{
string str[10],temp;
cout<<"enter strings:";
cin>>str[i];
for(i=0;i<10;i++)
{
getline(cin, str[i]);
    }
    for(i=0;i<9;++i)
    {
    for(j=i+1;j<10;j++)
    {
    if(str[i]>str[j])
    {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    }}}
    for(i=0;i<10;i++)
    cout<<str[i];
    return 0;
    }
    
