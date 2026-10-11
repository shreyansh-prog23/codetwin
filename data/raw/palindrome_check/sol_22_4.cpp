#include <bits/stdc++.h>
using namespace std;

int main() {
    
    char buf[200005]; scanf("%s", buf); string text(buf);
    bool ans = true;
    int sz = text.size();
    for (int k = 0; k < sz / 2; k++) {
        if (text[k] != text[sz - 1 - k]) ans = false;
    }
    puts(ans ? "YES" : "NO");
    return 0;
}
