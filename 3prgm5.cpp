#include <bits/stdc++.h>
using namespace std;
double findMedian(int a1[], int n)                                
{
    sort(a1,a1+n);
     if (n % 2 != 0)
       return (double)a1[n/2];
     
    return (double)(a1[(n-1)/2] + a1[n/2])/2.0;
}
 int main()
{
    int a1[] = { 1, 3, 4, 2, 7, 5, 8, 6 };
    int n = sizeof(a1)/sizeof(a1[0]); 
    cout << "Median = " << findMedian(a1, n) << endl; 
    return 0;
}
