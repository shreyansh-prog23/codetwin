#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

int main() {
  
  int cnt; scanf("%d", &cnt);
  vector<int> primes;
  for (int idx = 2; idx <= cnt; idx++) {
    bool ok = true;
    for (int pr : primes) {
      if (pr * pr > idx) break;
      if (idx % pr == 0) { ok = false; break; }
    }
    if (ok) primes.push_back(idx);
  }
  long long total = primes.size();
  printf("%lld\n", (long long)total);
  return 0;
}
