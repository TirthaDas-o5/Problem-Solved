#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    vector<int> c(2 * n);
    for (int i = 0, j = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            c[i] = b[i];
        }
        else
        {
            c[i] = a[j];
            j++;
        }
    }
    for (int x : c)
    {
        cout << x << " ";
    }
    return 0;
}