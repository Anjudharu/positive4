#include <iostream>
using namespace std;
int main()
{
int l, h, i, flag;
cout << "Enter two numbers(intervals): ";
cin >> l>> h;
cout << "Prime numbers between " << low << " and " << high << " are: ";
 while (l < h)
{
 flag = 0;
 for(i = 2; i <= l/2; ++i)
 {
 if(l % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
cout << l << " ";
++l;
}
return 0;
}
