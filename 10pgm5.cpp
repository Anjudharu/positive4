#include<iostream>
using namespace std;
int main()
{
 int i,n,s=0;
 cout<<"Enter the number: ";
 cin>>n;
 cout<<endl<<"The Factors are: "<<endl;
 for(i=1;i<=n;++i)
   {
       if(n%i==0)
        {
     cout << i <<endl ;
          s++;
            }
   }  
  if(s==2)
  cout<<n<<" is a Prime Number";
  else
  cout<<n<<" is Composite Number.";
}
