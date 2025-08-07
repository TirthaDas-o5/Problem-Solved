#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v.end() != find(v.begin(), v.end(), v[i] + 1))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}