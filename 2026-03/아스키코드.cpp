#include <stdio.h>

int main(void)
{
    int i;
    
    for (i = 0; i < 128; i++)
    {
        printf("아스키코드 값 %d : %c\n", i, i);
    }
    return 0;
}
