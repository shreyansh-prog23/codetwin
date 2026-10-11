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
    for (auto &cur : values) { cin >> cur; }
    long long acc = accumulate(values.begin(), values.end(), 0LL);
    cout << acc << "\n";
    return 0;
}
