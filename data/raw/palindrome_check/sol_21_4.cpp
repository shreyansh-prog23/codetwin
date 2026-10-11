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
    bool result = true;
    int len = word.size();
    for (int j = 0; j < len / 2; j++) {
        if (word[j] != word[len - 1 - j]) result = false;
    }
    cout << (result ? "YES" : "NO") << "\n";
    return 0;
}
