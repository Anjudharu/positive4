#include <bits/stdc++.h>
using namespace std;
inline bool isBasedTwo(int num)
 {
    while (num) 
{
        if ((num % 10) > 1)
        return false;
        num=num/10;
    }
    return true;
}

int main() {
    int num, count(0);
    cin >> num;
    for (int i(1);i<=num;i++)
    if (isBasedTwo(i))
    ++count;
    cout << count;
    return 0;
}
