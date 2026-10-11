#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
vector<long long> memo;

long long fib(int sz) {
    if (sz < 2) return sz;
    if (memo[sz] != -1) return memo[sz];
    return memo[sz] = (fib(sz - 1) + fib(sz - 2)) % MOD;
}

int main() {
    
    int k; scanf("%d", &k);
    memo.assign(k + 2, -1);
    long long ans = fib(k);
    printf("%lld\n", (long long)ans);
    return 0;
}
