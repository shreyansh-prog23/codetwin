// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  const long long MOD = 1000000007;
  long long v = 0, t = 1;
  for (int p = 0; p < m; p++) {
    long long nxt = (v + t) % MOD;
    v = t;
    t = nxt;
  }
  long long res = v;
  cout << res << endl;
  return 0;
}
