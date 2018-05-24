#include <iostream>
using namespace std;
int main()
{
  int num, i;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> num;

  for(i = 2; i <= num/ 2; ++i)
  {
      if(num% i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}
