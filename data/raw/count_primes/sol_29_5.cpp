// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  vector<int> primes;
  for (int p = 2; p <= m; p++) {
    bool ok = true;
    for (int pr : primes) {
      if (pr * pr > p) break;
      if (p % pr == 0) { ok = false; break; }
    }
    if (ok) primes.push_back(p);
  }
  long long res = primes.size();
  cout << res << endl;
  return 0;
}
