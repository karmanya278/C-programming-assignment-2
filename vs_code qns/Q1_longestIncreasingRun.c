#include <stdio.h>
int main() {
    int n;
    if(scanf("%d", &n) == 1) {
        if(n == 0) { printf("0\n"); return 0; }
        int arr[1000];
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int maxRun = 1, currentRun = 1;
        for(int i = 1; i < n; i++) {
            if(arr[i] > arr[i-1]) currentRun++;
            else {
                if(currentRun > maxRun) maxRun = currentRun;
                currentRun = 1;
            }
        }
        if(currentRun > maxRun) maxRun = currentRun;
        printf("%d\n", maxRun);
    }
    return 0;
}
