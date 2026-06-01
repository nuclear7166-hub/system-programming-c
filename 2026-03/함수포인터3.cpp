/*#include <stdio.h>

int add(int a, int b)  //call back ÇÔ¼ö 
{   return a+b;}
void excuter(int(*fp)(int, int))
{
    printf("%d\n", fp(10, 20));
}
int main()
{
    excuter(add);
}*/

#include <stdio.h>

int add(int a, int b)
{   return a+b;}

int main()
{
    int(*fp)(int, int);
    fp = add;
    printf("%d\n", fp(10, 20));
}
