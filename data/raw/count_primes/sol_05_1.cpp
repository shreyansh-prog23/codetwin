// accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int m; cin >> m;
  vector<bool> prime(m + 1, true);
  long long res = 0;
  for (int p = 2; p <= m; p++) {
    if (prime[p]) {
      res++;
      for (long long q = (long long)p * p; q <= m; q += p) prime[q] = false;
    }
  }
  cout << res << endl;
  return 0;
}
