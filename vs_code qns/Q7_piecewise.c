#include <stdio.h>
int main() {
    long long x, res;
    if(scanf("%lld", &x) == 1) {
        if(x < 0) res = x * x + 2 * x + 1;
        else if(x < 10) res = 3 * x + 2;
        else res = 5 * x - 7;
        printf("%lld\n", res);
    }
    return 0;
}
