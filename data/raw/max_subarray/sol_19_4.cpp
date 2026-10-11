#include <bits/stdc++.h>
using namespace std;

long long best(const vector<long long>& v, int l, int r) {
    if (l == r) return v[l];
    int mid = (l + r) / 2;
    long long left = best(v, l, mid), right = best(v, mid + 1, r);
    long long ls = LLONG_MIN, cs = 0;
    for (int k = mid; k >= l; k--) { cs += v[k]; ls = max(ls, cs); }
    long long rs = LLONG_MIN;
    cs = 0;
    for (int k = mid + 1; k <= r; k++) { cs += v[k]; rs = max(rs, cs); }
    return max(max(left, right), ls + rs);
}

int main() {
    
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    long long sum = best(a, 0, n - 1);
    cout << sum << "\n";
    return 0;
}
