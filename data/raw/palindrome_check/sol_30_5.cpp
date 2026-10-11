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
    deque<char> dq(input.begin(), input.end());
    bool acc = true;
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) { acc = false; break; }
        dq.pop_front();
        dq.pop_back();
    }
    cout << (acc ? "YES" : "NO") << "\n";
    return 0;
}
