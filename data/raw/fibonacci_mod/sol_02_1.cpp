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
  const long long MOD = 1000000007;
  long long arr = 0, val = 1;
  for (int idx = 0; idx < cnt; idx++) {
    long long nxt = (arr + val) % MOD;
    arr = val;
    val = nxt;
  }
  long long total = arr;
  printf("%lld\n", (long long)total);
  return 0;
}
