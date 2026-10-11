// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  vector<long long> v(m);
  for (int p = 0; p < m; p++) { cin >> v[p]; }
  long long pre = 0, mn = 0, res = LLONG_MIN;
  for (int p = 0; p < m; p++) {
    pre += v[p];
    res = max(res, pre - mn);
    mn = min(mn, pre);
  }
  cout << res << endl;
  return 0;
}
