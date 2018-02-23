#include <iostream>
using namespace std;
int main()
{
int origNum,n,remainder,sum = 0;
cout << "Enter a positive  integer: ";
cin >>origNum;
n=origNum;
while(n!=0)
{
digit=n%10;
sum +=digit*digit*digit;
n /=10;
}
if(sum==origNum)
cout <<origNum<< " is an Armstrong number.";
else
cout <<origNum<< " is not an Armstrong number.";
return 0;
}
