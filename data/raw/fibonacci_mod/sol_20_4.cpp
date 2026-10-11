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
  vector<long long> arr(max(cnt + 1, 2));
  arr[0] = 0;
  arr[1] = 1;
  for (int idx = 2; idx <= cnt; idx++) arr[idx] = (arr[idx - 1] + arr[idx - 2]) % MOD;
  long long total = arr[cnt];
  printf("%lld\n", (long long)total);
  return 0;
}
