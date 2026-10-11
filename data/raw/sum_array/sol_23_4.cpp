// accepted
#include <bits/stdc++.h>
using namespace std;

int m;
vector<long long> v;

long long solve(int p) {
  if (p == m) return 0;
  return v[p] + solve(p + 1);
}

int main() {
  
  cin >> m;
  v.resize(m);
  for (int p = 0; p < m; p++) { cin >> v[p]; }
  long long res = solve(0);
  cout << res << endl;
  return 0;
}
