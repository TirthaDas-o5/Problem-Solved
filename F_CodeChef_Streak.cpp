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
        int a[n], b[n], a_zero = 0, b_zero = 0;
        int a_max = 0, b_max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
            {
                a_zero++;
                a_max = max(a_zero, a_max);
            }
            else
            {
                a_zero = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != 0)
            {
                b_zero++;
                b_max = max(b_zero, b_max);
            }
            else
            {
                b_zero = 0;
            }
        }
        if (a_max < b_max)
        {
            cout << "Addy" << endl;
        }
        else if (a_max > b_max)
        {
            cout << "Om" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}