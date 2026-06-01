#include <stdio.h>

int main() {
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*p)[3] = a;

    printf("=== 2차원 배열 표 출력 ===\n");
    printf("          [0]   [1]   [2]  (열)\n");
    printf("--------------------------\n");

    for (int i = 0; i < 2; i++) {
        printf("행[%d] | ", i); 
        
        for (int j = 0; j < 3; j++) {
            printf("%4d  ", p[i][j]); 
        }
        printf("\n");
    }
    printf("--------------------------\n");

    return 0;
}
