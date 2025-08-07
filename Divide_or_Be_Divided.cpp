#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int num;
    cin >> num;
    int nx = -1, ny = -1;
    for (int i = 1; i <= n; i++)
    {
        int dig = num % 10;
        num /= 10;
        if (i == x)
            nx = dig;
        if (i == y)
            ny = dig;
    }
    if (nx == 0 || ny == 0)
    {
        cout << "NO" << endl;
    }
    else if (nx % ny == 0 || ny % nx == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
