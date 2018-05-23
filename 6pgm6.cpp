#include<iostream>
using namespace std;
{
	string str;
	int i = 0, length = str.length();

	cout << "Enter your str: ";
	cin >> str;

	while (i < length)
	{
		while (!((str[i] <= 'a' && str[i] >='z' ) || (str[i] <= 'A' && str[i] >= 'Z') || str[i] == ' ' || str[i] == '\n'))
		{
			cout << "Error -- Invalid name; try again: ";
			cin.clear();
			cout(numeric_limits<streamsize>::max(), '\n');
			cin >> str;
		}
		i++;
	}

        cout << str;
}
