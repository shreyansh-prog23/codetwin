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
  vector<long long> arr(cnt + 1, 0);
  for (int idx = 0; idx < cnt; idx++) {
    long long val; scanf("%lld", &val);
    arr[idx + 1] = arr[idx] + val;
  }
  long long total = arr[cnt];
  printf("%lld\n", (long long)total);
  return 0;
}
