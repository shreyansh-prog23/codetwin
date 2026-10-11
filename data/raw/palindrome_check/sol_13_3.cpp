#include <bits/stdc++.h>
using namespace std;

bool check(const string& s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return check(s, l + 1, r - 1);
}

int main() {
    
    string s; cin >> s;
    bool sum = check(s, 0, (int)s.size() - 1);
    cout << (sum ? "YES" : "NO") << "\n";
    return 0;
}
