#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    ifstream inFl; 
    string flName;
    string word;
    int count = 0;
    cout << "Please enter the file name ";
    getline(cin,flName);
    inFile.open(flName.c_str());
    while(!inFl.eof())
    {               
        inFl >> word; 
        count++;
    }
    cout << "Number of words in file is " << count;
    inFl.close();
    cin.get();  
    return 0;
}
