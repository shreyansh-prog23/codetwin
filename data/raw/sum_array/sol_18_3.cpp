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
    long long acc = 0;
    long long cur;
    int pos = 0;
    while (pos < total_n) {
        cin >> cur;
        acc += cur;
        ++pos;
    }
    cout << acc << "\n";
    return 0;
}
