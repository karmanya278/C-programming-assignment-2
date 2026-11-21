#include <stdio.h>
int main() {
    int r, c;
    if(scanf("%d %d", &r, &c) == 2) {
        int mat[100][100];
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                scanf("%d", &mat[i][j]);
        for(int i = 0; i < r; i++) {
            long long sum = 0;
            for(int j = 0; j < c; j++) sum += mat[i][j];
            printf("%lld%s", sum, (i==r-1)?"\n":" ");
        }
        for(int j = 0; j < c; j++) {
            long long sum = 0;
            for(int i = 0; i < r; i++) sum += mat[i][j];
            printf("%lld%s", sum, (j==c-1)?"\n":" ");
        }
    }
    return 0;
}
