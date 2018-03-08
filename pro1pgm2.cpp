#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int asmallest(int arr[], int n, int a)
{
    int b[MAX];
    memset(b, 0, sizeof b);
    for (int i = 0; i < n; i++)
        b[arr[i]] = 1;
    for (int j=1; j<MAX; j++)
    {
        if (b[j] != 1)
            a--;
        if (!a)
            return j;
    }
}
int main()
{
    int a = 1;
    int arr[] = { 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << asmallest(arr, n, a);
    return 0;
}
