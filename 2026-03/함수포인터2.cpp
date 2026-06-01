/*#include <stdio.h>
int add(int a, int b)
{   return a+b;}
int mul(int a, int b)
{   return a*b;}
int sub(int a, int b)
{   return a-b;}
int div(int a, int b)
{   return a/b;}

int main()
{
    int funcnumber;
    int num1, num2;
    int(*fp)(int, int);
    printf("함수번호와 계산 할 값을 입력하세요 :");
    scanf("%d%d%d", &funcnumber, &num1, &num2);
    switch(funcnumber)
    {
        case 0: fp = add;
                break;
        case 1: fp = mul;
                break;
        case 2: fp = sub;
                break;
        case 3: fp = div;
                break;
     } 
     printf("%d\n", fp(num1, num2)); 
 }*/
 
#include <stdio.h>
int add(int a, int b)
{   return a+b;}
int mul(int a, int b)
{   return a*b;}
int sub(int a, int b)
{   return a-b;}
int div(int a, int b)
{   return a/b;}

int main()
{
    int funcnumber;
    int num1, num2;
    int(*fp[4])(int, int);
    fp[0] = add;
    fp[1] = mul;
    fp[2] = sub;
    fp[3] = div;
    printf("함수번호와 계산 할 값을 입력하세요 :");
    scanf("%d%d%d", &funcnumber, &num1, &num2);
    printf("%d\n", fp[funcnumber](num1, num2));
}
//여러 번 사용이 가능한 것 
/*#include <stdio.h>

int add(int a, int b)
{   return a+b;}
int mul(int a, int b)
{   return a*b;}
int sub(int a, int b)
{   return a-b;}
int div(int a, int b)
{   return a/b;}

int main()
{
    int funcnumber;
    int num1, num2;
    int(*fp)(int, int);

    // --- 추가된 부분 (시작) ---
    while (1) { 
    // -----------------------

        printf("함수번호(0~3)와 계산 할 값 두 개를 입력하세요 (종료하려면 -1 입력) :");
        
        // --- 추가된 부분 (종료 조건 체크) ---
        scanf("%d", &funcnumber);
        if (funcnumber == -1) break; 
        scanf("%d%d", &num1, &num2);
        // ---------------------------------

        switch(funcnumber)
        {
            case 0: fp = add;
                    break;
            case 1: fp = mul;
                    break;
            case 2: fp = sub;
                    break;
            case 3: fp = div;
                    break;
            // --- 추가된 부분 (잘못된 입력 처리) ---
            default: 
                    printf("잘못된 번호입니다.\n");
                    continue; 
            // ---------------------------------
        } 
        printf("결과: %d\n\n", fp(num1, num2)); 

    // --- 추가된 부분 (끝) ---
    }
    printf("프로그램을 종료합니다.\n");
    // -----------------------

    return 0;
}*/
