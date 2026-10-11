#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    vector<bool> prime(sz + 1, true);
    long long ans = 0;
    for (int k = 2; k <= sz; k++) {
        if (prime[k]) {
            ans++;
            for (long long q = (long long)k * k; q <= sz; q += k) prime[q] = false;
        }
    }
    printf("%lld\n", (long long)ans);
    return 0;
}
