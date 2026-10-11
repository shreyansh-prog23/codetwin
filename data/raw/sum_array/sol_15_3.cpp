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
    int len; cin >> len;
    long long result = 0;
    long long num;
    int j = 0;
    while (j < len) {
        cin >> num;
        result += num;
        ++j;
    }
    cout << result << "\n";
    return 0;
}
