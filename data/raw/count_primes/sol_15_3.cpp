// solution
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
    int len; cin >> len;
    long long result = 0;
    for (int j = 1; j <= len; j++) if (isPrime(j)) result++;
    cout << result << "\n";
    return 0;
}
