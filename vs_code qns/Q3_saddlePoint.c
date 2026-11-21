#include <stdio.h>
int main() {
    int r, c;
    if(scanf("%d %d", &r, &c) == 2) {
        int mat[100][100];
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                scanf("%d", &mat[i][j]);
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                int val = mat[i][j], isSaddle = 1;
                for(int k = 0; k < c; k++) if(mat[i][k] < val) { isSaddle = 0; break; }
                if(isSaddle) {
                    for(int k = 0; k < r; k++) if(mat[k][j] > val) { isSaddle = 0; break; }
                }
                if(isSaddle) {
                    printf("%d %d %d\n", i, j, val);
                    return 0;
                }
            }
        }
        printf("None\n");
    }
    return 0;
}
