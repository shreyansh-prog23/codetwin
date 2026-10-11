#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    long long ans = sz >= 2 ? 1 : 0;
    vector<char> comp(sz / 2 + 1, 0);
    for (long long k = 3; k <= sz; k += 2) {
        if (!comp[k / 2]) {
            ans++;
            for (long long q = k * k; q <= sz; q += 2 * k) comp[q / 2] = 1;
        }
    }
    printf("%lld\n", (long long)ans);
    return 0;
}
