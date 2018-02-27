#include <bits/stdc++.h>
using namespace std;
 string convert(string s)
{
int n = s.length();
int r_ind = 0;
for (int i = 0; i < n; i++) 
{
 if (s[i] == ' ')
 {
 s[i + 1] = toupper(s[i + 1]);
 continue;
}
else
 s[r_ind++] = s[i];        
}
s[r_ind] = '\0';
}
 int main()
{
string str = " camel case ";
cout << convert(str);
return 0;
}
