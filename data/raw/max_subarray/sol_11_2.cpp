// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  vector<long long> v(m);
  for (int p = 0; p < m; p++) { cin >> v[p]; }
  long long res = v[0];
  for (int p = 0; p < m; p++) {
    long long run = 0;
    for (int t = p; t < m; t++) {
      run += v[t];
      if (run > res) res = run;
    }
  }
  cout << res << endl;
  return 0;
}
