// solution
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
    string word; cin >> word;
    deque<char> dq(word.begin(), word.end());
    bool result = true;
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) { result = false; break; }
        dq.pop_front();
        dq.pop_back();
    }
    cout << (result ? "YES" : "NO") << "\n";
    return 0;
}
