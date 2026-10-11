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
  for (auto &val : arr) { scanf("%lld", &val); }
  long long total = accumulate(arr.begin(), arr.end(), 0LL);
  printf("%lld\n", (long long)total);
  return 0;
}
