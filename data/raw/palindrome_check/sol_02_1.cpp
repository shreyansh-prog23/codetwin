#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <climits>
#include <deque>
using namespace std;

int main() {
  
  char buf[200005]; scanf("%s", buf); string str(buf);
  int l = 0, r = (int)str.size() - 1;
  bool total = true;
  while (l < r) {
    if (str[l] != str[r]) { total = false; break; }
    l++;
    r--;
  }
  puts(total ? "YES" : "NO");
  return 0;
}
