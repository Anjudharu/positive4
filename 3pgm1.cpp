#include <stdio.h>
#include <math.h>
int main()
{
int A,D,N,i,tn;
int sum = 0;
printf("Enter the first term value of the A.P. series: ");
scanf("%d", &A);
printf("Enter the total numbers in the A.P. series: ");
scanf("%d", &N);
printf("Enter the common difference of A.P. series: ");
scanf("%d", &D);
sum = (N * (2 * A + (N - 1)* D ))/ 2;
tn = A + (N - 1) * D;
printf("Sum of the A.P series is: ");
for (i = A; i <= tn; i = i + D )
{
if (i != tn)
printf("%d + ", i);
else
printf("%d = %d ", i, sum);
}
return 0;
}
