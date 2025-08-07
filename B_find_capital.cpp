#include <bits/stdc++.h>
using namespace std;
int Cap(string s)
{
    int e = 0;
    for (char x : s)
    {
        if (x >= 'A' && x <= 'Z')
        {
            e++;
        }
    }
    return e + 1;
}
int main()
{
    string a;
    cin >> a;
    cout << Cap(a) << endl;
    return 0;
}