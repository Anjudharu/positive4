#include <iostream>
using namespace std;
int main() 
{
  int ex;
  float b,r = 1;
 cout << "Enter base and exponent respectively:  ";
 cin >> b >> ex;
cout << b << "^" << ex << " = ";
 while (ex != 0) {
r *= b;
--ex;
 }
cout << r;
return 0;
}
