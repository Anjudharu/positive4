# include <stdio.h>
# include <stdlib.h> 
# include <math.h>
void minAbsSumPair(int arr[], int arr_size)
{
  int i_count = 0;
  int l, r, m_sum, sum, m_l, m_r;
   if(arr_size < 2)
  {
    printf("Invalid Input");
    return;
  }
   m_l = 0;
  m_r = 1;
  m_sum = arr[0] + arr[1];
   for(l = 0; l < arr_size - 1; l++)
  {
    for(r = l+1; r < arr_size; r++)
    {
      sum = arr[l] + arr[r];
      if(abs(m_sum) > abs(sum))
      {
        m_sum = sum;
        m_l = l;
        m_r = r;
      }
    }
  }
  printf(" The two elements whose sum is minimum are %d and %d",
          arr[m_l], arr[m_r]);
}
 int main()
{
  int arr[] = {1, 60, -10, 70, -80, 85};
  minAbsSumPair(arr, 6);
  getchar();
  return 0;
}
