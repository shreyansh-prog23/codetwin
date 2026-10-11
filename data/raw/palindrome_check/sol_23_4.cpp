// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string line; cin >> line;
  bool res = true;
  int m = line.size();
  for (int p = 0; p < m / 2; p++) {
    if (line[p] != line[m - 1 - p]) res = false;
  }
  cout << (res ? "YES" : "NO") << endl;
  return 0;
}
