#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    if(scanf("%d", &n) == 1) {
        int arr[1000];
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int minDiff = -1;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int diff = abs(arr[i] - arr[j]);
                if(minDiff == -1 || diff < minDiff) minDiff = diff;
            }
        }
        printf("%d\n", minDiff);
    }
    return 0;
}
