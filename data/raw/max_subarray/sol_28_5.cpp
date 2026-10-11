#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    vector<long long> dat(sz);
    for (int k = 0; k < sz; k++) { scanf("%lld", &dat[k]); }
    long long pre = 0, mn = 0, ans = LLONG_MIN;
    for (int k = 0; k < sz; k++) {
        pre += dat[k];
        ans = max(ans, pre - mn);
        mn = min(mn, pre);
    }
    printf("%lld\n", (long long)ans);
    return 0;
}
