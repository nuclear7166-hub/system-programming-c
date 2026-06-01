#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = 15;
    int d, e, f;
    int* p[3];
    
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    
    d = *p[0]; 
    e = *p[1]; 
    f = *p[2]; 
    
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    
    return 0;
}
