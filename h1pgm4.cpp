#include<iostream.h>
#include<stdio.h>
int main()
{
    int number=6;
    int * numcounts = new int[number];
    int count = 0;
    int a[6] = {1,1,1,2,2,3}; 
    for(int i=0;i<number;i++)
    {
        for(int j=0;j<number;j++)
        {
            if(a[i]==a[j])
            {
      count = count+1;
      numcounts[i] = count;
            }
            else{
                count = 0;
            }
        }
    }
}
