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
    string rev(word.rbegin(), word.rend());
    bool result = (rev == word);
    cout << (result ? "YES" : "NO") << "\n";
    return 0;
}
