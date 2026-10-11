#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

typedef vector<vector<long long> > Mat;
const long long MOD = 1000000007;

Mat mul(const Mat& p, const Mat& q) {
  Mat r(2, vector<long long>(2, 0));
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
      for (int k = 0; k < 2; k++)
        r[i][j] = (r[i][j] + p[i][k] * q[k][j]) % MOD;
  return r;
}

int main() {
  
  int cnt; scanf("%d", &cnt);
  Mat base = {{1, 1}, {1, 0}};
  Mat out = {{1, 0}, {0, 1}};
  int e = cnt;
  while (e > 0) {
    if (e & 1) out = mul(out, base);
    base = mul(base, base);
    e >>= 1;
  }
  long long total = out[0][1];
  printf("%lld\n", (long long)total);
  return 0;
}
