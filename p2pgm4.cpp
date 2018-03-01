#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char str[50];
	int length, i, j;
	cout<<"Enter a string : ";
	gets(str);
	len=strlen(str);
	for(i=0; i<length; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
		str[i]=='o' || str[i]=='u' || str[i]=='A' ||
		str[i]=='E' || str[i]=='I' || str[i]=='O' ||
		str[i]=='U')
		{
			for(j=i; j<length; j++)
			{
				str[j]=str[j+1];
			}
		length--;
		}
                                cout<<"After deleting the vowels, the string will be : "<<str;
                                while(i<j)
	                {
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	cout<<"Reverse of the String = "<<str;
	}
	getch();
}


