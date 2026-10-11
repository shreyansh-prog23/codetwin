#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s; cin >> s;
    int l = 0, r = (int)s.size() - 1;
    bool sum = true;
    while (l < r) {
        if (s[l] != s[r]) { sum = false; break; }
        l++;
        r--;
    }
    cout << (sum ? "YES" : "NO") << "\n";
    return 0;
}
