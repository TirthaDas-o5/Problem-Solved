#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n)
{
    if (n < 2)
    {
        return 0;
    }
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0){
            return 0;
        }
    return 1;
}

int digit(int num)
{
    int cnt = 0;
    while (num != 0)
    {
        cnt++;
        num /= 10;
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        long long y = x;
        int len = digit(x);
        for (int i = 1; i < k; i++)
        {
            y = y * pow(10, len) + x;
        }
        if (is_prime(y))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
