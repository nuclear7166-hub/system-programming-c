#include <stdio.h>

int main(void)
{
    char a = 127, b = 1, c;
    c = a+b;
    printf("%d\n", c); // 32bit unsigned int 이고 -1을 부호없는 수로계산
    return 0; 
}
