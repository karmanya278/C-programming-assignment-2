#include <stdio.h>
int main() {
    long long totalSeconds;
    if(scanf("%lld", &totalSeconds) == 1) {
        long long h = totalSeconds / 3600;
        long long m = (totalSeconds % 3600) / 60;
        long long s = totalSeconds % 60;
        printf("%lld %lld %lld\n", h, m, s);
    }
    return 0;
}
