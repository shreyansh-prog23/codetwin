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
    vector<bool> prime(len + 1, true);
    long long result = 0;
    for (int j = 2; j <= len; j++) {
        if (prime[j]) {
            result++;
            for (long long q = (long long)j * j; q <= len; q += j) prime[q] = false;
        }
    }
    cout << result << "\n";
    return 0;
}
