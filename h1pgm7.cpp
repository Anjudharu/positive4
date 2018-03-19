#include <bits/stdc++.h>
using namespace std;
void arrangeOddAndEven(int array[], int n)
{
    int i = 0, j = n - 1;
    while (1) {
    while ((i < n) && ((i + array[i]) % 2 == 0))
            i++;
       while ((j >= 0) && ((j + array[j]) % 2 == 0))
            j--;
        if (i >= j)
            break;
        swap(array[i], array[j]);
    }
}
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}
int main()
{
    int arr[] = { 3, 6, 12, 1, 5, 8 };
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Original Array: ";
    printArray(array, n);
    arrangeOddAndEven(array, n);
    cout << "\nModified Array: ";
    printArray(array, n);
    return 0;
}
