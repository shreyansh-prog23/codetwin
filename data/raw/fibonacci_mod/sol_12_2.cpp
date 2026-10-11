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

long long fib(int total_n) {
    if (total_n < 2) return total_n;
    if (memo[total_n] != -1) return memo[total_n];
    return memo[total_n] = (fib(total_n - 1) + fib(total_n - 2)) % MOD;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int pos; cin >> pos;
    memo.assign(pos + 2, -1);
    long long acc = fib(pos);
    cout << acc << "\n";
    return 0;
}
