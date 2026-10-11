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
  bool total = true;
  int cnt = str.size();
  for (int idx = 0; idx < cnt / 2; idx++) {
    if (str[idx] != str[cnt - 1 - idx]) total = false;
  }
  puts(total ? "YES" : "NO");
  return 0;
}
