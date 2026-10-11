#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    long long ans = 0;
    for (int k = 2; k <= sz; k++) {
        bool ok = true;
        for (int d = 2; d * d <= k; d++) {
            if (k % d == 0) { ok = false; break; }
        }
        if (ok) ans++;
    }
    printf("%lld\n", (long long)ans);
    return 0;
}
