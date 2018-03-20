#include<stdio.h>
 bool isSubset(int array1[], int array2[], int m, int n)
{
    int i = 0;
    int j = 0;
    for (i=0; i<n; i++)
    {
        for (j = 0; j<m; j++)
        {
           if(array2[i] == array1[j])
              break;
        }
           if (j == m)
           return 0;
    }
   return 1;
}
int main()
{
    int array1[] = {11, 1, 13, 21, 3, 7};
    int array2[] = {11, 3, 7, 1};
    int m = sizeof(array1)/sizeof(array1[0]);
    int n = sizeof(array2)/sizeof(array2[0]);
    if(isSubset(array1, array2, m, n))
      printf("array2[] is subset of array1[] ");
    else
      printf("array2[] is not a subset of array1[]");      
    getchar();
    return 0;
}
