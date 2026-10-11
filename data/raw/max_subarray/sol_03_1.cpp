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
    long long result = nums[0], cur = nums[0];
    for (int j = 1; j < len; j++) {
        cur = max(nums[j], cur + nums[j]);
        result = max(result, cur);
    }
    cout << result << "\n";
    return 0;
}
