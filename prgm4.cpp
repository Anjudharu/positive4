#include<iostream.h>
int main()
{
	char c;
	cout<<"enter the character";
	cin>>;
	if(c>='a' && c<='z' || c>='A' && c<='Z')
	cout<<"the character is alphabet";
	else
	cout<<"the character is not an alphabet";
	return 0;
}
