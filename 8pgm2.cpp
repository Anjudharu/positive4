#include<iostream>
using namespace std;
{
string str,count;
cout<<"enter the string:";
cin>>str;
int countVowels(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        if (isVowel(str[i])) 
            ++count;
    return count;
} 
cout<<"the vowels are:";
}
