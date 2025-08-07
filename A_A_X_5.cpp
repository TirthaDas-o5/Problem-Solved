#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, zf_o = 0;
        cin >> d;
        string s;
        cin >> s;
        for (int i = 0; i < d; i++)
        {
            int digit = s[i] - '0';
            if (digit == 0 || digit == 5)
            {
                zf_o++;
            }
        }
        if (zf_o)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}