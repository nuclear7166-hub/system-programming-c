/*#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10;
    int y = 20;
    printf("swap 전: x=%d y=%d\n", x, y);
    swap(&x, &y);
    printf("swap 후: x=%d y=%d\n", x, y);
    return 0;
}*/

#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10;
    int y = 20;
    printf("swap 전: x=%d y=%d\n", x, y);
    swap(x, y);
    printf("swap 후: x=%d y=%d\n", x, y);
    return 0;
}
