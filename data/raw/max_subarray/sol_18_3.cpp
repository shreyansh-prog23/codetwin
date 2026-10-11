#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int total_n; cin >> total_n;
    vector<long long> values(total_n);
    for (int pos = 0; pos < total_n; pos++) { cin >> values[pos]; }
    vector<long long> dp(total_n);
    dp[0] = values[0];
    long long acc = dp[0];
    for (int pos = 1; pos < total_n; pos++) {
        dp[pos] = max(dp[pos - 1], 0LL) + values[pos];
        acc = max(acc, dp[pos]);
    }
    cout << acc << "\n";
    return 0;
}
