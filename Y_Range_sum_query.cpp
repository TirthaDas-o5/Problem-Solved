#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int l, r, sum = 0;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            sum += a[i];//O(n*n)
        }
        cout << sum << endl;
    }
    return 0;
}