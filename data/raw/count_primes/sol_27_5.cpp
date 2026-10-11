// solution
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
    int len; cin >> len;
    vector<int> primes;
    for (int j = 2; j <= len; j++) {
        bool ok = true;
        for (int pr : primes) {
            if (pr * pr > j) break;
            if (j % pr == 0) { ok = false; break; }
        }
        if (ok) primes.push_back(j);
    }
    long long result = primes.size();
    cout << result << "\n";
    return 0;
}
