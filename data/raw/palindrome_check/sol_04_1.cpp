#include <bits/stdc++.h>
using namespace std;

int main() {
    
    char buf[200005]; scanf("%s", buf); string text(buf);
    int l = 0, r = (int)text.size() - 1;
    bool ans = true;
    while (l < r) {
        if (text[l] != text[r]) { ans = false; break; }
        l++;
        r--;
    }
    puts(ans ? "YES" : "NO");
    return 0;
}
