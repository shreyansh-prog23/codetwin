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
    long long acc = 0;
    for (int pos = 2; pos <= total_n; pos++) {
        bool ok = true;
        for (int d = 2; d * d <= pos; d++) {
            if (pos % d == 0) { ok = false; break; }
        }
        if (ok) acc++;
    }
    cout << acc << "\n";
    return 0;
}
