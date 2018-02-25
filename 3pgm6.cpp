#include<stdio.h>
#include<conio.h>
void quicksort(int array[], int firstIndex, int lastIndex)
{
   int pivotIndex, temp, i1, i2;

    if(firstIndex < lastIndex)
    {
        pivotIndex = firstIndex;
        i1 = firstIndex;
        i2 = lastIndex;
        while(i1<i2)
        {
            while(array[i1] <= array[pivotIndex] && i1 < lastIndex)
            {
                i1++;
            }
            while(array[i2]>array[pivotIndex])
            {
                i2--;
            }
            if(i1<i2)
            {
                temp = array[i1];
                array[i1] = array[i2];
                array[i2] = temp;
            }
        }
        temp = array[pivotIndex];
        array[pivotIndex] = array[i2];
        array[i2] = temp;
        quicksort(array, firstIndex,i2-1);
        quicksort(array, i2+1, lastIndex);
    }
}
int main()
{
    int array[100],n,i;
    printf("Enter the number of element you want to Sort : ");
    scanf("%d",&n);
    printf("Enter Elements in the list : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    quicksort(array,0,n-1);
    printf("Sorted elements: ");
    for(i=0;i<n;i++)
    printf(" %d",array[i]);
    getch();
    return 0;
}
