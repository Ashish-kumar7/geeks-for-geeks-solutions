	
const int mod = 1e9 + 7;
    
int64_t expo(int64_t a, int64_t b) {
    int64_t ans = 1;
    while (b) {
        if (b & 1)(ans *= a) %= mod;
        (a *= a) %= mod;
        b >>= 1;
    }
    return ans;
}
int totalWays(int n, int k) {
    if (n < k)return 0;
    int64_t ans = 1;
    for (int i = n - k + 1; i <= n - 1; i++)(ans *= i) %= mod;
    for (int i = 1; i <= k - 1; i++)(ans *= expo(i, mod - 2)) %= mod;
    return ans;
}