#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> f(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int dig = s[i] - 'a';
        f[dig]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (f[i] != 0)
        {
            cout << (char)(i + 97) << " : " << f[i] << endl;
        }
    }
    return 0;
}