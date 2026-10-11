#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    long long pre = 0, mn = 0, sum = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        pre += a[i];
        sum = max(sum, pre - mn);
        mn = min(mn, pre);
    }
    cout << sum << "\n";
    return 0;
}
