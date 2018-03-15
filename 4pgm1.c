#include<stdio.h>
#include<conio.h>
void main()
{
char string[100];
int length, space;
printf( "Enter string: ");
printf("\n");
gets(string);
length = strlen(string);
printf("\n");
printf("\n No.of characters in string is %d " , length );
getch();
}
