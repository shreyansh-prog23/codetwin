// accepted
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
vector<long long> memo;

long long fib(int m) {
  if (m < 2) return m;
  if (memo[m] != -1) return memo[m];
  return memo[m] = (fib(m - 1) + fib(m - 2)) % MOD;
}

int main() {
  
  int p; cin >> p;
  memo.assign(p + 2, -1);
  long long res = fib(p);
  cout << res << endl;
  return 0;
}
