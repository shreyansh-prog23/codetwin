#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
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
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int total_n; cin >> total_n;
    long long acc = fd(total_n).first;
    cout << acc << "\n";
    return 0;
}
