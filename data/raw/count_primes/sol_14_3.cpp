#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
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
  
  int cnt; scanf("%d", &cnt);
  long long total = 0;
  for (int idx = 1; idx <= cnt; idx++) if (isPrime(idx)) total++;
  printf("%lld\n", (long long)total);
  return 0;
}
