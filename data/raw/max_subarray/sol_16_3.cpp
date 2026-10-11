#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    vector<long long> dat(sz);
    for (int k = 0; k < sz; k++) { scanf("%lld", &dat[k]); }
    vector<long long> dp(sz);
    dp[0] = dat[0];
    long long ans = dp[0];
    for (int k = 1; k < sz; k++) {
        dp[k] = max(dp[k - 1], 0LL) + dat[k];
        ans = max(ans, dp[k]);
    }
    printf("%lld\n", (long long)ans);
    return 0;
}
