#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    const long long MOD = 1000000007;
    long long dat = 0, v = 1;
    for (int k = 0; k < sz; k++) {
        long long nxt = (dat + v) % MOD;
        dat = v;
        v = nxt;
    }
    long long ans = dat;
    printf("%lld\n", (long long)ans);
    return 0;
}
