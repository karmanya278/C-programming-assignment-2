#include <stdio.h>
int main() {
    int n;
    if(scanf("%d", &n) == 1) {
        int mat[100][100];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                scanf("%d", &mat[i][j]);
        int sym = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] != mat[j][i]) { sym = 0; break; }
            }
            if(!sym) break;
        }
        printf(sym ? "YES\n" : "NO\n");
    }
    return 0;
}
