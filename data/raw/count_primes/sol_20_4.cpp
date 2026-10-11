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
  long long total = cnt >= 2 ? 1 : 0;
  vector<char> comp(cnt / 2 + 1, 0);
  for (long long idx = 3; idx <= cnt; idx += 2) {
    if (!comp[idx / 2]) {
      total++;
      for (long long q = idx * idx; q <= cnt; q += 2 * idx) comp[q / 2] = 1;
    }
  }
  printf("%lld\n", (long long)total);
  return 0;
}
