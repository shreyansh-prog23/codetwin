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
    long long acc = total_n >= 2 ? 1 : 0;
    vector<char> comp(total_n / 2 + 1, 0);
    for (long long pos = 3; pos <= total_n; pos += 2) {
        if (!comp[pos / 2]) {
            acc++;
            for (long long q = pos * pos; q <= total_n; q += 2 * pos) comp[q / 2] = 1;
        }
    }
    cout << acc << "\n";
    return 0;
}
