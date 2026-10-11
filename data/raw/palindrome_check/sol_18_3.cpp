#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

bool check(const string& s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return check(s, l + 1, r - 1);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string input; cin >> input;
    bool acc = check(input, 0, (int)input.size() - 1);
    cout << (acc ? "YES" : "NO") << "\n";
    return 0;
}
