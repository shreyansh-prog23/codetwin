#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    vector<long long> dat(sz);
    for (int k = 0; k < sz; k++) { scanf("%lld", &dat[k]); }
    long long ans = dat[0];
    for (int k = 0; k < sz; k++) {
        long long run = 0;
        for (int v = k; v < sz; v++) {
            run += dat[v];
            if (run > ans) ans = run;
        }
    }
    printf("%lld\n", (long long)ans);
    return 0;
}
