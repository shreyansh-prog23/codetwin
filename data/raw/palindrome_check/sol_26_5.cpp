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
  deque<char> dq(str.begin(), str.end());
  bool total = true;
  while (dq.size() > 1) {
    if (dq.front() != dq.back()) { total = false; break; }
    dq.pop_front();
    dq.pop_back();
  }
  puts(total ? "YES" : "NO");
  return 0;
}
