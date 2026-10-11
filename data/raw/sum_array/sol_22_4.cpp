#include <bits/stdc++.h>
using namespace std;

int sz;
vector<long long> dat;

long long solve(int k) {
    if (k == sz) return 0;
    return dat[k] + solve(k + 1);
}

int main() {
    
    scanf("%d", &sz);
    dat.resize(sz);
    for (int k = 0; k < sz; k++) { scanf("%lld", &dat[k]); }
    long long ans = solve(0);
    printf("%lld\n", (long long)ans);
    return 0;
}
