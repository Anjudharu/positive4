#include <iostream>
using namespace std;
int main(){
   string str;
   int digitcount= 0, spacecount= 0;
   cout << "Enter any string: ";
   getline(cin, str); 
     for(int i = 0; str[i]!='\0'; i++)  
 {
     if(str[i]>='0' && str[i]<='9') {
        digitCount++;
     }
     else if(str[i]==' ') {
        spaceCount++;
     }
  }
  cout << "Digits in String: " << digitCount << endl;
  cout << "White Spaces in String: " << spaceCount << endl;
  return 0;
}
