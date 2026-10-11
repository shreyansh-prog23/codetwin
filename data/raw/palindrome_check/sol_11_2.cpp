// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string line; cin >> line;
  string rev(line.rbegin(), line.rend());
  bool res = (rev == line);
  cout << (res ? "YES" : "NO") << endl;
  return 0;
}
