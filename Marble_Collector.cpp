#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[101];       
        int f[101] = {0};

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= 1 && a[i] <= m) {
                f[a[i]] = 1;
            }
        }

        int p = 0;
        for (int i = 1; i <= m; i++) {
            if (f[i] == 1)
                p++;
        }

        cout << m - p << endl;
    }
    return 0;
}
