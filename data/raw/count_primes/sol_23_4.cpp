// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  long long res = m >= 2 ? 1 : 0;
  vector<char> comp(m / 2 + 1, 0);
  for (long long p = 3; p <= m; p += 2) {
    if (!comp[p / 2]) {
      res++;
      for (long long q = p * p; q <= m; q += 2 * p) comp[q / 2] = 1;
    }
  }
  cout << res << endl;
  return 0;
}
