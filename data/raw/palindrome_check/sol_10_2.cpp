#include <bits/stdc++.h>
using namespace std;

int main() {
    
    char buf[200005]; scanf("%s", buf); string text(buf);
    string rev(text.rbegin(), text.rend());
    bool ans = (rev == text);
    puts(ans ? "YES" : "NO");
    return 0;
}
