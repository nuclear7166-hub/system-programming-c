/*#include <stdio.h>
int add(int a, int b)
{
    return a+b;
 } 
typedef int(*FP)(int, int);// FP가 함수 포인터 타 

FP getadd() // 를 풀어쓰면 int(*getadd())(int, int);
{
    return add;
 } 
int main()
{
    FP fp = add;
    printf("%d\n", getadd()(10, 20));
    printf("%d\n", add(10, 20));
    printf("%d\n", fp(10, 20));
}*/

/*#include <stdio.h>
int add(int a, int b)
{
    return a+b;
 } 
typedef int(*FP)(int, int);

FP getadd() // 를 풀어쓰면 int(*getadd())(int, int);
{
    return add;
 } 
int main()
{
    int (*fp)(int, int); 
    //FP fp = add;
    fp = add;
    //printf("%d\n", getadd()(10, 20));
    printf("%d\n", add(10, 20));
    printf("%d\n", fp(10, 20));
}*/
 
/* 
#include <stdio.h>
int add(int a, int b)
{    return a+b; } 
int sub(int a, int b)
{    return a-b; } 

typedef int(*FP)(int, int);

FP select(int mode) 
{  if(mode==0)
         return add;
    else 
         return sub; } 
int main()
{
    FP f;
    f = select(0);
    printf("%d\n", f(10, 5));
    f = select(1);
    printf("%d\n", f(10, 5));
    
}*/

#include <stdio.h>
int add(int a, int b)
{    return a+b; } 
int sub(int a, int b)
{    return a-b; } 

int main()
{
    int funcnumber;
    int num1, num2;
    int (*fp)(int, int);
    printf("모드 선택과 값을 입력 해주세요 : ");
    scanf("%d%d%d", &funcnumber, &num1, &num2);
    switch(funcnumber)
    {
        case 0: fp = add;
                break;
        case 1: fp = sub;
                break;
    }
    printf("%d\n", fp(num1, num2)); 
}



















