#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    vector<long long> dat(sz + 1, 0);
    for (int k = 0; k < sz; k++) {
        long long v; scanf("%lld", &v);
        dat[k + 1] = dat[k] + v;
    }
    long long ans = dat[sz];
    printf("%lld\n", (long long)ans);
    return 0;
}
