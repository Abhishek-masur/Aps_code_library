#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    return (a > b ? a : b);
}
int LCS(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();
    int table[s1.length() + 1][s2.length() + 1];
    for (int i = 0; i <= m; i++)
    {
        table[i][0] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        table[0][i] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                table[i][j] = table[i - 1][j - 1] + 1;
            }
            else
            {

                table[i][j] = maximum(table[i - 1][j], table[i][j - 1]);
            }
        }
    }

    return table[m][n];
}
int main()
{
    string s1 = "abcde";
    string s2 = "bdabac";
    cout << "Largest Common Subsequence is of Length : ";
    cout << LCS(s1, s2);
    return 0;
}