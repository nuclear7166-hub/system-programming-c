#include <stdio.h>

int main(void)
{
    unsigned char a = 10, b = 13, c, d;
    c = a & b;
    d = a ^ b;
    printf("%u\n", c);
    printf("%x%x", c, d);
    return 0; 
}
