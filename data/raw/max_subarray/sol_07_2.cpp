#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    long long sum = a[0];
    for (int i = 0; i < n; i++) {
        long long run = 0;
        for (int x = i; x < n; x++) {
            run += a[x];
            if (run > sum) sum = run;
        }
    }
    cout << sum << "\n";
    return 0;
}
