// accepted
#include <bits/stdc++.h>
using namespace std;

bool check(const string& s, int l, int r) {
  if (l >= r) return true;
  if (s[l] != s[r]) return false;
  return check(s, l + 1, r - 1);
}

int main() {
  
  string line; cin >> line;
  bool res = check(line, 0, (int)line.size() - 1);
  cout << (res ? "YES" : "NO") << endl;
  return 0;
}
