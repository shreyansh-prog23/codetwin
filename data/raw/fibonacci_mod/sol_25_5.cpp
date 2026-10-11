#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

pair<long long, long long> fd(long long n) {
    if (n == 0) return make_pair(0LL, 1LL);
    pair<long long, long long> p = fd(n / 2);
    long long c = p.first * ((2 * p.second - p.first + MOD) % MOD) % MOD;
    long long d = (p.first * p.first + p.second * p.second) % MOD;
    if (n % 2 == 0) return make_pair(c, d);
    return make_pair(d, (c + d) % MOD);
}

int main() {
    
    int n; cin >> n;
    long long sum = fd(n).first;
    cout << sum << "\n";
    return 0;
}
