// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  const long long MOD = 1000000007;
  vector<long long> v(max(m + 1, 2));
  v[0] = 0;
  v[1] = 1;
  for (int p = 2; p <= m; p++) v[p] = (v[p - 1] + v[p - 2]) % MOD;
  long long res = v[m];
  cout << res << endl;
  return 0;
}
