#include <iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;
    cout << "First value is "<< x <<endl;
    cout << "Second value is "<< y <<endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout <<"== After Swapping ==" <<endl;
    cout << "First value is "<< x <<endl;
    cout << "Second value is "<< y <<endl;
    return 0;
}
