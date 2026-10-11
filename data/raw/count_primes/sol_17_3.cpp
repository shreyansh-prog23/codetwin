// accepted
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
  if (x < 2) return false;
  if (x < 4) return true;
  if (x % 2 == 0 || x % 3 == 0) return false;
  for (int f = 5; (long long)f * f <= x; f += 6) {
    if (x % f == 0 || x % (f + 2) == 0) return false;
  }
  return true;
}

int main() {
  
  int m; cin >> m;
  long long res = 0;
  for (int p = 1; p <= m; p++) if (isPrime(p)) res++;
  cout << res << endl;
  return 0;
}
