#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    vector<int> primes;
    for (int k = 2; k <= sz; k++) {
        bool ok = true;
        for (int pr : primes) {
            if (pr * pr > k) break;
            if (k % pr == 0) { ok = false; break; }
        }
        if (ok) primes.push_back(k);
    }
    long long ans = primes.size();
    printf("%lld\n", (long long)ans);
    return 0;
}
