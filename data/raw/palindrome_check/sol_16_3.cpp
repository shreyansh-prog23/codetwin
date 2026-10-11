#include <bits/stdc++.h>
using namespace std;

bool check(const string& s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return check(s, l + 1, r - 1);
}

int main() {
    
    char buf[200005]; scanf("%s", buf); string text(buf);
    bool ans = check(text, 0, (int)text.size() - 1);
    puts(ans ? "YES" : "NO");
    return 0;
}
