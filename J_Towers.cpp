#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001]; // because li <= 1000
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int f[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        f[a[i]]++;
    }

    int max_ele = 0;
    int cnt = 0;

    for (int i = 1; i <= 1000; i++)
    {
        if (f[i] > 0)
        {
            max_ele = max(max_ele, f[i]);
            cnt++;
        }
    }
    cout << max_ele << " " << cnt << endl;
    return 0;
}
