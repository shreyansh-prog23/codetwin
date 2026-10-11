#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s; cin >> s;
    bool sum = true;
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) sum = false;
    }
    cout << (sum ? "YES" : "NO") << "\n";
    return 0;
}
