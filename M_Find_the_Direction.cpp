#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string dir[4] = {"North", "East", "South", "West"};
    while (t--)
    {
        int n;
        cin >> n;
        cout << dir[n % 4]<<endl;
    }
    return 0;
}