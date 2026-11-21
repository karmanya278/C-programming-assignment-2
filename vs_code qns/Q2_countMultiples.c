#include <stdio.h>
int countMultiples(int n, int k) {
    return n / k;
}
int main() {
    int n, k;
    if(scanf("%d %d", &n, &k) == 2) {
        printf("%d\n", countMultiples(n, k));
    }
    return 0;
}
