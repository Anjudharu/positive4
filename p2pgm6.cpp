#include<bits/stdc++.h>
using namespace std;
int getOddOccurrence(int array[],
                    int array_size)
{
    int i;
    for (i = 0; i < array_size; i++) {
         int count = 0;
        for (int j = 0; j < array_size; j++)
        {
            if (array[i] == array[j])
                count++;
        }
        if (count % 2 != 0)
            return array[i];
    }
    return -1;
}

int main()
    {
        int array[] = { 1,2,2, 3, 5, 4, 5, 2,
                    4, 3, 5, 2, 4, 4, 2 };
        int n = sizeof(array) / sizeof(array[0]);
          cout<<getOddOccurrence(arr, n);
         return 0;
  }
