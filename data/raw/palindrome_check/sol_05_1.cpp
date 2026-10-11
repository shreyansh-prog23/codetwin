// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string line; cin >> line;
  int l = 0, r = (int)line.size() - 1;
  bool res = true;
  while (l < r) {
    if (line[l] != line[r]) { res = false; break; }
    l++;
    r--;
  }
  cout << (res ? "YES" : "NO") << endl;
  return 0;
}
