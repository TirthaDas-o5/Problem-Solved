#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            a = i, b = j;
            if (a > n)
                a = 2 * n - a;
            if (b > n)
                b = 2 * n - b;
            int minimum = min(a, b);
            cout << n - minimum + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}