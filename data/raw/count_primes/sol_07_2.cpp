#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    long long sum = 0;
    for (int i = 2; i <= n; i++) {
        bool ok = true;
        for (int d = 2; d * d <= i; d++) {
            if (i % d == 0) { ok = false; break; }
        }
        if (ok) sum++;
    }
    cout << sum << "\n";
    return 0;
}
