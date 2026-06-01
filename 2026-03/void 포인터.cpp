#include <stdio.h>
void hello(void)
{    printf("hello world\n"); } 
void bonjour(void)
{    printf("bonjour\n"); } 
int main()
{
    void(*fp)(void);
    fp = hello;
    fp();
    fp = bonjour;
    fp();
}
