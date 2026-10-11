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
  long long total = 0;
  for (int idx = 0; idx < cnt; idx++) total += arr[idx];
  printf("%lld\n", (long long)total);
  return 0;
}
