#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    const long long MOD = 1000000007;
    vector<long long> dat(max(sz + 1, 2));
    dat[0] = 0;
    dat[1] = 1;
    for (int k = 2; k <= sz; k++) dat[k] = (dat[k - 1] + dat[k - 2]) % MOD;
    long long ans = dat[sz];
    printf("%lld\n", (long long)ans);
    return 0;
}
