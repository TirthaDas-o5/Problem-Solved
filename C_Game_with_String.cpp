#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,flag=1;
        cin >> n;
        char s[n];
        cin >> s;
        if (n % 2)
        {
            flag=0;
        }
        int f[26] = {0};
        for (int i = 0; i < n; i++)
        {
            int dig = s[i] - 'a';
            f[dig] += 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (f[i] % 2 != 0)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}