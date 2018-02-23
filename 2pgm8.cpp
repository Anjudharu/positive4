#include <cmath>
using namespace std;
int main(){
int sum,n;
cout<<"Armstrong numbers between 1 and 1000: ";
for(int i=0;i<10; i++)
{
for(int j=0; j<10;j++)
{
for(int k = 0; k< 10; k++) 
{
n= i*100+j*10+k;
sum = pow(i, 3)+pow(j, 3)+pow(k, 3);
if(n== sum)
cout<<n<<"  ";
}
}
}
return 0;
}
