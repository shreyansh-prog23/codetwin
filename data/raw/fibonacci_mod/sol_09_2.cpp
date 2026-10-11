// solution
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

const long long MOD = 1000000007;
vector<long long> memo;

long long fib(int len) {
    if (len < 2) return len;
    if (memo[len] != -1) return memo[len];
    return memo[len] = (fib(len - 1) + fib(len - 2)) % MOD;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int j; cin >> j;
    memo.assign(j + 2, -1);
    long long result = fib(j);
    cout << result << "\n";
    return 0;
}
