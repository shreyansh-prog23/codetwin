// solution
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

long long best(const vector<long long>& v, int l, int r) {
    if (l == r) return v[l];
    int mid = (l + r) / 2;
    long long left = best(v, l, mid), right = best(v, mid + 1, r);
    long long ls = LLONG_MIN, cs = 0;
    for (int k = mid; k >= l; k--) { cs += v[k]; ls = max(ls, cs); }
    long long rs = LLONG_MIN;
    cs = 0;
    for (int k = mid + 1; k <= r; k++) { cs += v[k]; rs = max(rs, cs); }
    return max(max(left, right), ls + rs);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int len; cin >> len;
    vector<long long> nums(len);
    for (int j = 0; j < len; j++) { cin >> nums[j]; }
    long long result = best(nums, 0, len - 1);
    cout << result << "\n";
    return 0;
}
