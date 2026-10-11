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
    long long result = 0;
    for (int j = 0; j < len; j++) result += nums[j];
    cout << result << "\n";
    return 0;
}
