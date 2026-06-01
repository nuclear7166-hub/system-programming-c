#include <stdio.h>

sum(int x, int y)
{
    return x + y;
}

int main()
{
    int n1 = 10, n2 = 20, result;
    result = sum(n1, n2);
    printf("%d", result);
}
