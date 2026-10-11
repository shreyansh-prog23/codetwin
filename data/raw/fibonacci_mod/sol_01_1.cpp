#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    const long long MOD = 1000000007;
    long long a = 0, x = 1;
    for (int i = 0; i < n; i++) {
        long long nxt = (a + x) % MOD;
        a = x;
        x = nxt;
    }
    long long sum = a;
    cout << sum << "\n";
    return 0;
}
