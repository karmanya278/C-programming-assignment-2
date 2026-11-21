#include <stdio.h>
int digitSum(int num) {
    int s = 0;
    if(num < 0) num = -num;
    while(num) { s += num % 10; num /= 10; }
    return s;
}
int main() {
    int n;
    if(scanf("%d", &n) == 1) {
        int arr[1000], sums[1000];
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sums[i] = digitSum(arr[i]);
        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(sums[i] == sums[j]) count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
