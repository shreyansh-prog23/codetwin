#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

int cnt;
vector<long long> arr;

long long solve(int idx) {
  if (idx == cnt) return 0;
  return arr[idx] + solve(idx + 1);
}

int main() {
  
  scanf("%d", &cnt);
  arr.resize(cnt);
  for (int idx = 0; idx < cnt; idx++) { scanf("%lld", &arr[idx]); }
  long long total = solve(0);
  printf("%lld\n", (long long)total);
  return 0;
}
