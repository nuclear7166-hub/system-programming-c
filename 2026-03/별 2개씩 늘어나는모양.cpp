#include <stdio.h>

int main(void)
{
    int i, j;
    int n = 5; // 최대 별 개수의 반 (중간 줄의 별 수 = 2*n -1)

    // 위쪽 삼각형
    for (i = 1; i <= n; i++)  // 줄 수
    {
        // 공백
        for (j = 1; j <= n - i; j++)
            printf(" ");
        // 별
        for (j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    // 아래쪽 삼각형
    for (i = n-1; i >= 1; i--) // 줄 수
    {
        // 공백
        for (j = 1; j <= n - i; j++)
            printf(" ");
        // 별
        for (j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

