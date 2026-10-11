// solution
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

int len;
vector<long long> nums;

long long solve(int j) {
    if (j == len) return 0;
    return nums[j] + solve(j + 1);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> len;
    nums.resize(len);
    for (int j = 0; j < len; j++) { cin >> nums[j]; }
    long long result = solve(0);
    cout << result << "\n";
    return 0;
}
