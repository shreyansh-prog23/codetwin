#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

bool check(const string& s, int l, int r) {
  if (l >= r) return true;
  if (s[l] != s[r]) return false;
  return check(s, l + 1, r - 1);
}

int main() {
  
  char buf[200005]; scanf("%s", buf); string str(buf);
  bool total = check(str, 0, (int)str.size() - 1);
  puts(total ? "YES" : "NO");
  return 0;
}
