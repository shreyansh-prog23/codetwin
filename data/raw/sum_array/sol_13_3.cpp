#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    long long sum = 0;
    long long x;
    int i = 0;
    while (i < n) {
        cin >> x;
        sum += x;
        ++i;
    }
    cout << sum << "\n";
    return 0;
}
