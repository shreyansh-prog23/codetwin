#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int sz; scanf("%d", &sz);
    long long ans = 0;
    long long v;
    int k = 0;
    while (k < sz) {
        scanf("%lld", &v);
        ans += v;
        ++k;
    }
    printf("%lld\n", (long long)ans);
    return 0;
}
