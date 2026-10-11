#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    vector<long long> dat(sz);
    for (int k = 0; k < sz; k++) { scanf("%lld", &dat[k]); }
    long long ans = 0;
    for (int k = 0; k < sz; k++) ans += dat[k];
    printf("%lld\n", (long long)ans);
    return 0;
}
