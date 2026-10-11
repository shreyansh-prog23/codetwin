#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<bool> prime(n + 1, true);
    long long sum = 0;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            sum++;
            for (long long q = (long long)i * i; q <= n; q += i) prime[q] = false;
        }
    }
    cout << sum << "\n";
    return 0;
}
