#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
vector<long long> memo;

long long fib(int n) {
    if (n < 2) return n;
    if (memo[n] != -1) return memo[n];
    return memo[n] = (fib(n - 1) + fib(n - 2)) % MOD;
}

int main() {
    
    int i; cin >> i;
    memo.assign(i + 2, -1);
    long long sum = fib(i);
    cout << sum << "\n";
    return 0;
}
