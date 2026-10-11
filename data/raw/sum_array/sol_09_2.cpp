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
    for (auto &num : nums) { cin >> num; }
    long long result = accumulate(nums.begin(), nums.end(), 0LL);
    cout << result << "\n";
    return 0;
}
