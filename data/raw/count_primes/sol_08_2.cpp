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
  long long total = 0;
  for (int idx = 2; idx <= cnt; idx++) {
    bool ok = true;
    for (int d = 2; d * d <= idx; d++) {
      if (idx % d == 0) { ok = false; break; }
    }
    if (ok) total++;
  }
  printf("%lld\n", (long long)total);
  return 0;
}
