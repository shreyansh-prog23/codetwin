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
    vector<long long> values(total_n);
    for (int pos = 0; pos < total_n; pos++) { cin >> values[pos]; }
    long long acc = values[0], cur = values[0];
    for (int pos = 1; pos < total_n; pos++) {
        cur = max(values[pos], cur + values[pos]);
        acc = max(acc, cur);
    }
    cout << acc << "\n";
    return 0;
}
