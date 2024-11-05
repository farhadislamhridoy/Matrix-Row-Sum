#include <stdio.h>

int main(){

    int n,m;
    scanf("%d%d", &n, &m);
    int array[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int i = 0; i<n; i++){
            int rowSum=0;
        for(int j = 0; j<m; j++){
            rowSum+=array[i][j];
        }
        printf("%d\n", rowSum);
    }

    return 0;
}

