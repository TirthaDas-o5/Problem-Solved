#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            float avg = sum / (i + 1);
            if (avg < 40)
            {
                flag = 0;
                break;
            }
        }

        flag ? cout << "Yes" << endl : cout << "No" << endl;
    }

    return 0;
}