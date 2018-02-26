#include <iostream>
using namespace std;
int main()
{
    int n, rno = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    while(n!= 0)
    {
        remainder = n%10;
        rno = rno*10 + remainder;
        n=n/10;
    }
    cout << "Reversed Number = " << rno;
    return 0;
}
