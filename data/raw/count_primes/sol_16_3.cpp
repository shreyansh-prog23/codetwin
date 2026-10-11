#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    if (x < 4) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int f = 5; (long long)f * f <= x; f += 6) {
        if (x % f == 0 || x % (f + 2) == 0) return false;
    }
    return true;
}

int main() {
    
    int sz; scanf("%d", &sz);
    long long ans = 0;
    for (int k = 1; k <= sz; k++) if (isPrime(k)) ans++;
    printf("%lld\n", (long long)ans);
    return 0;
}
