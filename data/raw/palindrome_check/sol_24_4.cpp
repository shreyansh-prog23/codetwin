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
    string input; cin >> input;
    bool acc = true;
    int total_n = input.size();
    for (int pos = 0; pos < total_n / 2; pos++) {
        if (input[pos] != input[total_n - 1 - pos]) acc = false;
    }
    cout << (acc ? "YES" : "NO") << "\n";
    return 0;
}
