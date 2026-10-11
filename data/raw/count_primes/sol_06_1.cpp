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
    int total_n; cin >> total_n;
    vector<bool> prime(total_n + 1, true);
    long long acc = 0;
    for (int pos = 2; pos <= total_n; pos++) {
        if (prime[pos]) {
            acc++;
            for (long long q = (long long)pos * pos; q <= total_n; q += pos) prime[q] = false;
        }
    }
    cout << acc << "\n";
    return 0;
}
