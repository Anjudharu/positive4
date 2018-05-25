
#include &lt;bits/stdc++.h&gt;
using namespace std; 
string is_isogram(string str)
{
    int length = str.length();
    for (int i = 0; i &lt; length; i++)
        str[i] = tolower(str[i]);
     sort(str.begin(), str.end());
    for (int i = 0; i &lt; length; i++) {
        if (str[i] == str[i + 1])
            return &quot;False&quot;;
    }
    return &quot;True&quot;;
}
int main()
{
    string str1 = &quot;Machine&quot;;
    cout<< &lt;&lt;<< is_isogram(str1) &lt;&lt;<< endl;
     string str2 = &quot;isogram&quot;;
    cout <<&lt;&lt;<< is_isogram(str2) &lt;&lt;<< endl;
     string str3 = &quot;GeeksforGeeks&quot;;
    cout<< &lt;&lt;<< is_isogram(str3) &lt;&lt;<< endl;
     string str4 = &quot;Alphabet&quot;;
    cout<< &lt;&lt;<< is_isogram(str4) &lt;&lt;<< endl;
     return 0;
}
