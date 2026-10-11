// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  long long res = 0;
  long long t;
  int p = 0;
  while (p < m) {
    cin >> t;
    res += t;
    ++p;
  }
  cout << res << endl;
  return 0;
}
