#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<long long> a(n);
    for (auto &x : a) { cin >> x; }
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    cout << sum << "\n";
    return 0;
}
