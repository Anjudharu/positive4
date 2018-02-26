#include<bits/stdc++.h>
using namespace std;
bool areisomorphic(string str1, string str2)
{
     int m = str1.length(), n = str2.length();
         if (m != n)
      return false;
    bool mark[MAX_CHAR] = {false};
    int map[MAX_CHAR];
    memset(map, -1, sizeof(map));
   for (int i = 0; i < n; i++)
    {
     if (map[str1[i]] == -1)
        {
          if (mark[str2[i]] == true)
                return false;
            mark[str2[i]] = true;
          map[str1[i]] = str2[i];
        }
        else if (map[str1[i]] != str2[i])
            return false;
    }
    return true;
}
int main()
{
   cout << areisomorphic("aab", "xxy") << endl;
   cout << areisomorphic("aab", "xyz") << endl;
   return 0;
}
