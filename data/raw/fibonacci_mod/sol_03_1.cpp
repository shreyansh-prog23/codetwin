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
    long long nums = 0, num = 1;
    for (int j = 0; j < len; j++) {
        long long nxt = (nums + num) % MOD;
        nums = num;
        num = nxt;
    }
    long long result = nums;
    cout << result << "\n";
    return 0;
}
