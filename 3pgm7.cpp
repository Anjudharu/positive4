#include <iostream>
using namespace std;
int isNumericString(unsigned char *n)
{
int i=0;
while (*(n+i)) 
{
if (*(n+i) >= '0' && *(n+i) <= '9')
i++;
else
return 0;
}
return 1;
}
int main()
{
int return = 0;
unsigned char str1[] = "123";
unsigned char str2[] = "ABC";
ret = isNumericString(str1);
if(return)
cout<<"It is numeric string"<<endl;
else
cout<<"It is not numeric string"<<endl;
return = isNumericString(str2);
if(return)
cout<<"It is numeric string"<<endl;
else
cout<<"It is not numeric string"<<endl;	
return 0;
}
