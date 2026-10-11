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
  vector<bool> prime(cnt + 1, true);
  long long total = 0;
  for (int idx = 2; idx <= cnt; idx++) {
    if (prime[idx]) {
      total++;
      for (long long q = (long long)idx * idx; q <= cnt; q += idx) prime[q] = false;
    }
  }
  printf("%lld\n", (long long)total);
  return 0;
}
