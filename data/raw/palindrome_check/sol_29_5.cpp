// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string line; cin >> line;
  deque<char> dq(line.begin(), line.end());
  bool res = true;
  while (dq.size() > 1) {
    if (dq.front() != dq.back()) { res = false; break; }
    dq.pop_front();
    dq.pop_back();
  }
  cout << (res ? "YES" : "NO") << endl;
  return 0;
}
