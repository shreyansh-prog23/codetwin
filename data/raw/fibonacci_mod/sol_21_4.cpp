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
    const long long MOD = 1000000007;
    vector<long long> nums(max(len + 1, 2));
    nums[0] = 0;
    nums[1] = 1;
    for (int j = 2; j <= len; j++) nums[j] = (nums[j - 1] + nums[j - 2]) % MOD;
    long long result = nums[len];
    cout << result << "\n";
    return 0;
}
