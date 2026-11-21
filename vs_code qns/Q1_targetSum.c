#include <stdio.h>
int main() {
    int n, target;
    if(scanf("%d %d", &n, &target) == 2) {
        int arr[1000];
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] + arr[j] == target) count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
