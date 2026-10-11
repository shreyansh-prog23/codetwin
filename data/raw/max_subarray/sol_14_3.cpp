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
  vector<long long> arr(cnt);
  for (int idx = 0; idx < cnt; idx++) { scanf("%lld", &arr[idx]); }
  vector<long long> dp(cnt);
  dp[0] = arr[0];
  long long total = dp[0];
  for (int idx = 1; idx < cnt; idx++) {
    dp[idx] = max(dp[idx - 1], 0LL) + arr[idx];
    total = max(total, dp[idx]);
  }
  printf("%lld\n", (long long)total);
  return 0;
}
