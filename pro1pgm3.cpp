#include<bits/stdc++.h>
using namespace std;
 int s(char *x, char *y, int m, int n)
{
    int L[m+1][n+1];
        for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
             else if (x[i-1] == y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
             else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
       return L[m][n];
}
 int findMinCost(char x[], char y[], int costx, int costy)
{
      int m = strlen(x), n = strlen(y);
    int len_S = s(x, y, m, n);
         return costx * (m - len_S) +
           costy * (n - len_S);
}
 int main()
{
    char [] = "magma";
    char [] = "gemstone";
    cout << "Minimum Cost to make two strings "
         << " identical is = " << findMinCost(x, y, 1, 1);
    return 0;
}
