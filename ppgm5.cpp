#include <iostream.h>
using namespace std;
romanNO::romanNO(char& ch)
{
	M = 1000;
	D = 500;
	C = 100;
	L = 50;
	X = 10;
	V = 5;
	I = 1;
	cout << ch ;
	romanNumber = ch;
}
int romanNO::convert()
{
	if(romanNumber == 'M')
	{
		return 1000;
	}
	else if(romanNumber == 'D')
	{
		return 500;
	}
	else if(romanNumber == 'C')
	{
		return 100;
	}
	else if(romanNumber == 'L')
	{
		return 50;
	}
	else if(romanNumber == 'X')
	{
		return 10;
	}
	else if(romanNumber == 'V')
	{
		return 5;
	}
	else if(romanNumber == 'I')
	{
		return 1;
	}
	return 0;
}
void romanNO::show()
{
	cout << romanNumber ;
}
void romanNO::get()
{
}
getch();
}
