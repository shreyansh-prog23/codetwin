#include <bits/stdc++.h>
using namespace std;

int main() {
    
    char buf[200005]; scanf("%s", buf); string text(buf);
    deque<char> dq(text.begin(), text.end());
    bool ans = true;
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) { ans = false; break; }
        dq.pop_front();
        dq.pop_back();
    }
    puts(ans ? "YES" : "NO");
    return 0;
}
