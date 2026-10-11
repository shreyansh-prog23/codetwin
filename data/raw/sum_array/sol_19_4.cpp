#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> a;

long long solve(int i) {
    if (i == n) return 0;
    return a[i] + solve(i + 1);
}

int main() {
    
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    long long sum = solve(0);
    cout << sum << "\n";
    return 0;
}
