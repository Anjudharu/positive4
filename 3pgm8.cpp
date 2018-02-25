#include <stdio.h>
void incrementArray(int[]);
void main()
{
int index;
int array[4] = {10, 20, 30, 40};
incrementArray(array);
for (i = 0; i < 4; i++)
printf("%d\t",array[index]);   
}
void incrementArray(int arr[])
{
int index;
for (i = 0; i < 4; i++)
arr[index]++;     
}
