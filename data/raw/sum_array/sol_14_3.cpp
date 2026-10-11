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
  long long total = 0;
  long long val;
  int idx = 0;
  while (idx < cnt) {
    scanf("%lld", &val);
    total += val;
    ++idx;
  }
  printf("%lld\n", (long long)total);
  return 0;
}
