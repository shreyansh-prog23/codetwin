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
    int l = 0, r = (int)word.size() - 1;
    bool result = true;
    while (l < r) {
        if (word[l] != word[r]) { result = false; break; }
        l++;
        r--;
    }
    cout << (result ? "YES" : "NO") << "\n";
    return 0;
}
