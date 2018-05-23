#include<iostream>
using namespace std;
int main()
{
 string str1, str2;
    cout << "Enter string str1: ";
    cin>> str1;
    cout << "Enter string str2: ";
    cin>>str2;
    strcat(str1,str2);
    cout<< "str1="<<str1;
    cout<<"str2="<<str2;
    return 0;
}
