// solution
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int len; cin >> len;
    long long result = 0;
    for (int j = 2; j <= len; j++) {
        bool ok = true;
        for (int d = 2; d * d <= j; d++) {
            if (j % d == 0) { ok = false; break; }
        }
        if (ok) result++;
    }
    cout << result << "\n";
    return 0;
}
