// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  long long res = 0;
  for (int p = 2; p <= m; p++) {
    bool ok = true;
    for (int d = 2; d * d <= p; d++) {
      if (p % d == 0) { ok = false; break; }
    }
    if (ok) res++;
  }
  cout << res << endl;
  return 0;
}
