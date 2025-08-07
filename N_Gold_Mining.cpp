#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        n++;
        (x<=n*y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}