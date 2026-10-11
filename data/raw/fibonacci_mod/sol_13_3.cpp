#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<long long> > Mat;
const long long MOD = 1000000007;

Mat mul(const Mat& p, const Mat& q) {
    Mat r(2, vector<long long>(2, 0));
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                r[i][j] = (r[i][j] + p[i][k] * q[k][j]) % MOD;
    return r;
}

int main() {
    
    int n; cin >> n;
    Mat base = {{1, 1}, {1, 0}};
    Mat out = {{1, 0}, {0, 1}};
    int e = n;
    while (e > 0) {
        if (e & 1) out = mul(out, base);
        base = mul(base, base);
        e >>= 1;
    }
    long long sum = out[0][1];
    cout << sum << "\n";
    return 0;
}
