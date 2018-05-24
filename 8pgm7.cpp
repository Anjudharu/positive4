#include <iostream>
 using namespace std;
int main()
{
  int i, num; 
  cout<<"enter any number:";
  cin>>num;
  cout<<"factors of a given number:"<<endl;
  for (i=1;i<=num;i++)
   {
     if(num%i == 0)
        {
       cout<<num;
	}
        }
  return 0;
}
