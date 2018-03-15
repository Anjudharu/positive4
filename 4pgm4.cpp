#include<iostream>
#include<fstream>
using namespace std;
 int main()
{
    int c = 0;
    string lines;
   ifstream file("main.cpp");
    while (getline(file, lines))
     c++;
     cout << "Numbers of lines in the file : " << c<< endl;
    return 0;
}
