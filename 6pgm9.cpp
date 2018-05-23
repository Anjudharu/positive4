#include <iostream>
using namespace std;
int main()
 {
int a[10];
int i;
    int big;
    cout<<"Enter ten values:";
    for (i=0;i<10;i++) 
{
    cin>>a[i];
    }
    big = a[0];
    for (i = 0; i < 10; i++) {
 if (a[i] >big) {
 big= a[i];
    }
    }
    cout<<"Greatest of ten numbers is %d"<<big;
    return 0;
  }
