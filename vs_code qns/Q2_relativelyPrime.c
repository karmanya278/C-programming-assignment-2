#include <stdio.h>
long long gcd(long long a, long long b) {
    while(b) { long long t = b; b = a % b; a = t; }
    return a;
}
int main() {
    long long n, m;
    if(scanf("%lld %lld", &n, &m) == 2) {
        long long count = 0;
        for(long long x = 1; x <= m; x++) {
            if(gcd(x, n) == 1) count++;
        }
        printf("%lld\n", count);
    }
    return 0;
}
