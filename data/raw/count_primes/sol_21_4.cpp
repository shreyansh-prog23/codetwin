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
    long long result = len >= 2 ? 1 : 0;
    vector<char> comp(len / 2 + 1, 0);
    for (long long j = 3; j <= len; j += 2) {
        if (!comp[j / 2]) {
            result++;
            for (long long q = j * j; q <= len; q += 2 * j) comp[q / 2] = 1;
        }
    }
    cout << result << "\n";
    return 0;
}
