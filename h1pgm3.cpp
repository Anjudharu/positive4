#include<iostream>
using namespace std;
void reorder(int arr[], int index[], int num)
{
    int temp[num];
    for (int i=0; i<num; i++)
        temp[index[i]] = arr[i];
    for (int i=0; i<num; i++)
    { 
       arr[i]   = temp[i];
       index[i] = i;
    }
}
 int main()
{
    int arr[] = {50, 40, 70, 60, 90};
    int index[] = {3,  0,  4,  1,  2};
    int num = sizeof(arr)/sizeof(arr[0]);
     reorder(arr, index, num);
     cout << "Reordered array is: \n";
    for (int i=0; i<num; i++)
        cout << arr[i] << " ";
     cout << "\nModified Index array is: \n";
    for (int i=0; i<num; i++)
        cout << index[i] << " ";
    return 0;
}
