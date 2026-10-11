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
    int l = 0, r = (int)input.size() - 1;
    bool acc = true;
    while (l < r) {
        if (input[l] != input[r]) { acc = false; break; }
        l++;
        r--;
    }
    cout << (acc ? "YES" : "NO") << "\n";
    return 0;
}
