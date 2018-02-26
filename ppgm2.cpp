#include <iostream>
using namespace std;
int main()
{
 unsigned int num;
 unsigned long long factorial = 1;
 cout << "Enter a positive integer: ";
 cin >> num;
 for(int i = 1; i <=num; i++)
 {
 factorial = factorial * i;
 }
 cout << "Factorial of " << num << " = " << factorial;    
 return 0;
}
