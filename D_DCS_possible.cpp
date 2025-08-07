#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int f[26] = {0};
        for (char ch : s)
        {
            int dig = ch - 'a';
            f[dig] = 1;
        }
        int o = 0;
        for (int i = 0; i < 26; i++)
        {
            if (f[i] > 0)
            {
                o++;
            }
        }
        cout << o << endl;
    }
    return 0;
}