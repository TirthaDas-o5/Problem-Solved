#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            char curr = s[i];
            if (res.empty() == 0)
            {
                char last = res.back();
                if ((last == 'A' && curr == 'B') || (last == 'B' && curr == 'B'))
                {
                    res.pop_back();
                }
                else
                {
                    res.push_back(curr);
                }
            }
            else
            {
                res.push_back(curr);
            }
        }
        cout << res.length() << endl;
    }
    return 0;
}
