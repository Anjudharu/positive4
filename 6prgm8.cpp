#include <iostream>
#include <string.h>
void swap(int*, int *);
void main()
{
    int n1,n2;
    cout<<"Enter two numbers:";
   cin>>n1>>n2;
    cout<<the numbers before swapping are n1=%d n2=%d",n1,n2";
    swap(&n1,&n2);       
    cout<<"The numbers after swapping are n1= %d n2 = %d",n1,n2);
}
void swap(int*x,int*y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
