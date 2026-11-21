#include <stdio.h>
long long rectangleArea(long long length, long long width) {
    return length * width;
}
int main() {
    long long l, w;
    if(scanf("%lld %lld", &l, &w) == 2) {
        printf("%lld\n", rectangleArea(l, w));
    }
    return 0;
}
