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
    vector<long long> values(max(total_n + 1, 2));
    values[0] = 0;
    values[1] = 1;
    for (int pos = 2; pos <= total_n; pos++) values[pos] = (values[pos - 1] + values[pos - 2]) % MOD;
    long long acc = values[total_n];
    cout << acc << "\n";
    return 0;
}
