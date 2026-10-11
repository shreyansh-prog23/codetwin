#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        bool ok = true;
        for (int pr : primes) {
            if (pr * pr > i) break;
            if (i % pr == 0) { ok = false; break; }
        }
        if (ok) primes.push_back(i);
    }
    long long sum = primes.size();
    cout << sum << "\n";
    return 0;
}
