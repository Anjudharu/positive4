#include <iostream>
#include <string>
using namespace std;
void appendDemo(string str1,optr)
{
     str1.append(optr);
    cout << "Using append() : ";
    cout << str1 << endl;
}
 int main()
{
    string str1("str1 ");
    string.optr(".");
    cout << "Original String : " << str1 << endl;
    appendDemo(str1, optr);
     return 0;
}
