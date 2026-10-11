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
    vector<int> primes;
    for (int pos = 2; pos <= total_n; pos++) {
        bool ok = true;
        for (int pr : primes) {
            if (pr * pr > pos) break;
            if (pos % pr == 0) { ok = false; break; }
        }
        if (ok) primes.push_back(pos);
    }
    long long acc = primes.size();
    cout << acc << "\n";
    return 0;
}
