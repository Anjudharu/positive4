
#include<iostream.h> 
using namespace std;
void main() 
{ 
              int sum, a, i ; 
              float av; 
              clrscr(); 
              cout<<"\n Enter the Value of a:"; 
              cin>>a; 
              sum=0; 
              i =1; 
         while(i<=a) 
            { 
                 sum= sum + i ;       
                 i = i + 1; 
            } 
                cout<<"\n Sum is: "<<sum; 
                av=(float) sum/a; 
                cout<<"\n Average is :"<<av; 
} 
