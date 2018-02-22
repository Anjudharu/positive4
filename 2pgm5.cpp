#include <stdio.h>
void main()
{
int num,m,n;
clrscr();
cout<<"enter the value for m";
cin>>m;
cout<<"enter the value for n";
cin>>n;
printf("Print even Numbers in a given range m to n:\n");
for (num = m; num <= n; num++)
 {
 if (num % 2 == 0)
 printf ("%d ", num);
  }
 getch();
}

