#include <iostream>
#include <cstdlib>
using namespace std;
void shift(int values[], int size)
 {
int array[10]={1,2,3,4,5,6,7,8,9,0}; 
int temp,n,k;
cout<<"enter the number";
cin>>n;
cout<<"enter the k integer";
cin>>k;
    for (int i = 0; i < size; i++)
 {    
        temp = values[size - 1];
        values[i] = values[i + 1];
        values[0] = temp;
        cout << values[i] << setw(4);
    }
    cout << endl;
}
int main()
{
    cout << "Random 10 index array" << endl;
    const int C = 10;
    int number[C];
     int i;
    for (i = 0; i < C; i++) {
        int rng = rand() % 100 + 1;
        number[i] = rng;
        cout << number[i] << setw(4);
    }
    cout << "shifting all elements to the right: " << endl;
shift(number, C);
   cout << endl;
    system("pause");
    return 0;
}
