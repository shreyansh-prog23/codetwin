// solution
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
    int len; cin >> len;
    vector<long long> nums(len);
    for (int j = 0; j < len; j++) { cin >> nums[j]; }
    vector<long long> dp(len);
    dp[0] = nums[0];
    long long result = dp[0];
    for (int j = 1; j < len; j++) {
        dp[j] = max(dp[j - 1], 0LL) + nums[j];
        result = max(result, dp[j]);
    }
    cout << result << "\n";
    return 0;
}
