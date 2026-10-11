#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s; cin >> s;
    deque<char> dq(s.begin(), s.end());
    bool sum = true;
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) { sum = false; break; }
        dq.pop_front();
        dq.pop_back();
    }
    cout << (sum ? "YES" : "NO") << "\n";
    return 0;
}
