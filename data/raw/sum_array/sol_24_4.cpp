#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

int total_n;
vector<long long> values;

long long solve(int pos) {
    if (pos == total_n) return 0;
    return values[pos] + solve(pos + 1);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> total_n;
    values.resize(total_n);
    for (int pos = 0; pos < total_n; pos++) { cin >> values[pos]; }
    long long acc = solve(0);
    cout << acc << "\n";
    return 0;
}
