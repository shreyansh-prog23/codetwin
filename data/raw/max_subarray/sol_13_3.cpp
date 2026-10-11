#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    vector<long long> dp(n);
    dp[0] = a[0];
    long long sum = dp[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1], 0LL) + a[i];
        sum = max(sum, dp[i]);
    }
    cout << sum << "\n";
    return 0;
}
