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
    vector<long long> nums(len + 1, 0);
    for (int j = 0; j < len; j++) {
        long long num; cin >> num;
        nums[j + 1] = nums[j] + num;
    }
    long long result = nums[len];
    cout << result << "\n";
    return 0;
}
