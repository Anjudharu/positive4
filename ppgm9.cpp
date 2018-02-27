#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int snum,enum;
 int found=0,count=0;
    cout<<"Enter Number Start of Range:  ";
    cin>>snum;
    cout<<"Enter Number End of Range:  ";
    cin>>enum;
    for(int i=snum;i<=enum;i++)
       {
    for(int j=2;j<=sqrt(i);j++)
     {
      if(i%j==0)
      count++;
      }
     if(count==0&&i!=1)
     { found++;
     cout<<"Prime Number -> "<<i<<endl;
     count=0;
      }
      count=0;
      }
 cout<<"Total Prime Number Between Range "<<snum<<" to
 "<<enum<<" = "<<found<<endl;
 return 1;
}
