#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int flag = 0;
        while (n--)
        {
            string a, b;
            cin >> a >> b;
            if (a != "soda" || a != "water")
            {
                flag = 1;
                break;
            }
        }
        cout << "Case " << i << ": ";
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}