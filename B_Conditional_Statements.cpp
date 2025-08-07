#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    if (n <= 9)
    {
        cout << num[n - 1] << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }
    return 0;
}