#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<long long> a(n + 1, 0);
    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        a[i + 1] = a[i] + x;
    }
    long long sum = a[n];
    cout << sum << "\n";
    return 0;
}
