#include <stdio.h>

int main()
{
    int a = 5;
    scanf("%d", &a);

    if ((a % 2) == 0)
    {
        printf("짝수입니다.\n");
        printf("참 잘했어요\n");
    }
    else
    {
        printf("홀수입니다.\n");
        printf("참 잘했어요.\n");
    }

    printf("참 잘했어요.");
    return 0;
}

