#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s; cin >> s;
    string rev(s.rbegin(), s.rend());
    bool sum = (rev == s);
    cout << (sum ? "YES" : "NO") << "\n";
    return 0;
}
