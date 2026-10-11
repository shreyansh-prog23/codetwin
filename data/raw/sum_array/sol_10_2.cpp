#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    vector<long long> dat(sz);
    for (auto &v : dat) { scanf("%lld", &v); }
    long long ans = accumulate(dat.begin(), dat.end(), 0LL);
    printf("%lld\n", (long long)ans);
    return 0;
}
