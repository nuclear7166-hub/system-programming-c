#include <stdio.h>

int main()
{
    int a = 10, b = 10, res;
    res = sum(a+b);
    printf("%d\n", res);
}
int sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

#include <stdio.h>

int main()
{
    int a = 5, b = 10, res;
    res = sum(&a, &b);
    printf("%d\n", res);
}
sum(int* x, int* y)
{
    int z;
    z = *x + *y;
    return z;
}

#include <stdio.h>

int main()
{
    int a = 5, b = 10, res;
    int (*fp)(int, int)
    fp = sum;
    res = fp(a, b);
}
int sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
/*
#include <stdio.h>

int add(int a, int b)
{   return a+b; }

int main()
{
    int a = 10, b = 10;
    int add = a+b;
    printf("%d\n", add);
}

#include <stdio.h>

int preparation(int* a, int* b)
{
    int Total = (*int a) + (*int b);
    return Total;
}
int main()
{
    int a = 10, int b = 10;
    int total = preparation(&int a, &int b);
    printf("total add = %d\n", total);
    return 0;
}*/
