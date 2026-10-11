#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    if (x < 4) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int f = 5; (long long)f * f <= x; f += 6) {
        if (x % f == 0 || x % (f + 2) == 0) return false;
    }
    return true;
}

int main() {
    
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) if (isPrime(i)) sum++;
    cout << sum << "\n";
    return 0;
}
