// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  vector<long long> v(m + 1, 0);
  for (int p = 0; p < m; p++) {
    long long t; cin >> t;
    v[p + 1] = v[p] + t;
  }
  long long res = v[m];
  cout << res << endl;
  return 0;
}
