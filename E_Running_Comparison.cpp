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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int day = 0;
        for (int i = 0; i < n; i++)
        {
            float p = (float)a[i] / b[i];
            float q = (float)b[i] / a[i];
            if (p > 2 || q > 2)
            {
                day++;
            }
        }
        cout << n - day << endl;
    }
    return 0;
}