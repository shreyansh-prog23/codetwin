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
    string rev(input.rbegin(), input.rend());
    bool acc = (rev == input);
    cout << (acc ? "YES" : "NO") << "\n";
    return 0;
}
