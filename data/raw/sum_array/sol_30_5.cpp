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
    vector<long long> values(total_n + 1, 0);
    for (int pos = 0; pos < total_n; pos++) {
        long long cur; cin >> cur;
        values[pos + 1] = values[pos] + cur;
    }
    long long acc = values[total_n];
    cout << acc << "\n";
    return 0;
}
