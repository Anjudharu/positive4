#include<stdio.h>
#include<conio.h>
void main()
{
longint sum=0,i,num;
clrscr();
printf("\n Please Give The Value of N:  ");
scanf("%ld",&num);
for(i=1;i<=num;i++)
{
printf("\n num * %ld = %ld",i,num*i);
}
getch();
}
