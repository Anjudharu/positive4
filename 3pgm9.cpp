#include <iostream>
using namespace std;
int  main()
{
	int time = 0;
	int hour = 0;
	int min = 0;
	cout << "Enter a time in minutes: ";
	cin >> time;     
	hour = time/3600;
	time = time%3600;
	cout<<"nThe time in HH:MM format is: "<<hour<<" hours, "
		<<min<<" minutes "<<!n";
	return 0;
}
