// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  vector<long long> v(m);
  for (auto &t : v) { cin >> t; }
  long long res = accumulate(v.begin(), v.end(), 0LL);
  cout << res << endl;
  return 0;
}
