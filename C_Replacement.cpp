#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    transform(a.begin(), a.end(), a.begin(), [](int x){
        if(x < 0) return 2;
        if(x > 0) return 1;
        return 0;
    });

    for(int x : a) {
        cout << x << " ";
    }
    return 0;
}
