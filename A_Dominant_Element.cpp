#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], f[1001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]] += 1;
        }
        int mx = f[0];
        for (int i = 0; i <= 1000; i++)
        {
            if (mx < f[i])
                mx = f[i];
        }
        int cnt = 0;
        for (int i = 0; i <= 1000; i++)
        {
            if (mx == f[i])
                cnt++;
        }
        if (cnt == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}