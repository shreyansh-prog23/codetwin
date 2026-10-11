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
    int total_n; cin >> total_n;
    const long long MOD = 1000000007;
    long long values = 0, cur = 1;
    for (int pos = 0; pos < total_n; pos++) {
        long long nxt = (values + cur) % MOD;
        values = cur;
        cur = nxt;
    }
    long long acc = values;
    cout << acc << "\n";
    return 0;
}
