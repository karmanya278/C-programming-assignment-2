#include <stdio.h>
int main() {
    int N, found = 0;
    if(scanf("%d", &N) == 1) {
        for(long long a = 1; a <= N; a++) {
            for(long long b = a + 1; b <= N; b++) {
                for(long long c = b + 1; c <= N; c++) {
                    if(a*a + b*b == c*c) {
                        printf("%lld %lld %lld\n", a, b, c);
                        found = 1;
                    }
                }
            }
        }
        if(!found) printf("None\n");
    }
    return 0;
}
