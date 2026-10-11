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
    long long acc = 0;
    for (int pos = 0; pos < total_n; pos++) acc += values[pos];
    cout << acc << "\n";
    return 0;
}
