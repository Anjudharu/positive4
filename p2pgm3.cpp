#include<stdio.h>
#include<math.h>
void main()
{
 int n,t=0,remainder,quotient;
 printf("Enter the number to be tested: ");
 scanf("%d",&n);
 quotient=n;
 do
 {
      remainder=q%10;
      t=t+pow(r,2);
      quotient=quotient/10;
 }
 while(quotient%10!=0);
 printf("%d",t);
}
