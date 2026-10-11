// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  vector<long long> v(m);
  for (int p = 0; p < m; p++) { cin >> v[p]; }
  vector<long long> dp(m);
  dp[0] = v[0];
  long long res = dp[0];
  for (int p = 1; p < m; p++) {
    dp[p] = max(dp[p - 1], 0LL) + v[p];
    res = max(res, dp[p]);
  }
  cout << res << endl;
  return 0;
}
