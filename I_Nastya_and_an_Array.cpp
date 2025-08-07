#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int posFreq[100001] = {0};
    int negFreq[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            posFreq[x] = 1;
        }
        else if (x < 0)
        {
            negFreq[-x] = 1;
        }
    }
    int count = 0;
    for (int i = 1; i <= 100000; i++)
    {
        if (posFreq[i] == 1)
        {
            count++;
        }
        if (negFreq[i] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
