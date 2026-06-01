#include <stdio.h>
void a(void);void b(void);void c(unsigned int x);
int sum(int a, int b);
main()
{     unsigned int num1 = 10, num2 = 20, result;
      a();     c(900000000);       b();         c(3000000000);
      printf("만세 \n");
      result = sum(num1, num2);
      printf("%d\n", result);      }
void a(void)
{    printf("대한민국 \n");}
void b(void)
{    printf("금수강산 \n");}
void c(unsigned int x)
{    while(x--);}
int sum(int a, int b)
{   int res = a + b;
    return res;}
