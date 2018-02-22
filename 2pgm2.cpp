#include <iostream>
using namespace std;
int main()
{
 int n, n1, digit, reverse = 0;
 cout << "Enter a positive number: ";
cin >> n1;
 n = n1;
do
 {     
 digit = num % 10;
 reverse = (rev * 10) + digit;
n1 = n1 / 10;
 } 
while (n1 != 0);
 cout << " The reverse of the number is: " << reverse << endl;
if (n == reverse)
cout << " The number is a palindrome";
else
 cout << " The number is not a palindrome";
 return 0;
