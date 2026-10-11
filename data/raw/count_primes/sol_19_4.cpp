#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    long long sum = n >= 2 ? 1 : 0;
    vector<char> comp(n / 2 + 1, 0);
    for (long long i = 3; i <= n; i += 2) {
        if (!comp[i / 2]) {
            sum++;
            for (long long q = i * i; q <= n; q += 2 * i) comp[q / 2] = 1;
        }
    }
    cout << sum << "\n";
    return 0;
}
