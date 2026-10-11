// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  vector<long long> v(m);
  for (int p = 0; p < m; p++) { cin >> v[p]; }
  long long res = 0;
  for (int p = 0; p < m; p++) res += v[p];
  cout << res << endl;
  return 0;
}
