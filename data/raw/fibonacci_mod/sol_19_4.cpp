#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    const long long MOD = 1000000007;
    vector<long long> a(max(n + 1, 2));
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= n; i++) a[i] = (a[i - 1] + a[i - 2]) % MOD;
    long long sum = a[n];
    cout << sum << "\n";
    return 0;
}
