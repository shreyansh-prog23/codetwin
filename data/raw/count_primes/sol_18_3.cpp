#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
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
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int total_n; cin >> total_n;
    long long acc = 0;
    for (int pos = 1; pos <= total_n; pos++) if (isPrime(pos)) acc++;
    cout << acc << "\n";
    return 0;
}
