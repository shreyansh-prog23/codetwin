#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

const long long MOD = 1000000007;
vector<long long> memo;

long long fib(int cnt) {
  if (cnt < 2) return cnt;
  if (memo[cnt] != -1) return memo[cnt];
  return memo[cnt] = (fib(cnt - 1) + fib(cnt - 2)) % MOD;
}

int main() {
  
  int idx; scanf("%d", &idx);
  memo.assign(idx + 2, -1);
  long long total = fib(idx);
  printf("%lld\n", (long long)total);
  return 0;
}
