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
  long long pre = 0, mn = 0, total = LLONG_MIN;
  for (int idx = 0; idx < cnt; idx++) {
    pre += arr[idx];
    total = max(total, pre - mn);
    mn = min(mn, pre);
  }
  printf("%lld\n", (long long)total);
  return 0;
}
