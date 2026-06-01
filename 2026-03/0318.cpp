#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divi(int a, int b)
{
    if(b == 0)
    {
        printf("0À¸·Î ³ª´­ ¼ö ¾ø½À´Ï´Ù.\n");
        return 0;
    }
    return 0;
}
int calculate(int a, int b, int (*op)(int, int))
{
    return op(a, b);
}

typedef struct
{
    char op_name[10];
    int (*func)(int, int);
}Operation;

int main()
{
    int a, b, choice;
    int result;
    int (*fp[4])(int, int) = {add, sub, mul, divi};
    Operation ops[4] = {{"µ¡¼À", add}, {"»¬¼À", sub}, {"°ö¼À", mul}, {"³ª´°¼À", divi}};
    while(1)
    {
        printf("\nÁ¤¼ö 2°³ ÀÔ·Â : ");
        scanf("%d %d", &a, &b);
        printf("1:µ¡¼À  2:»¬¼À  3:°ö¼À  4:³ª´°¼À  0:Á¾·á\n");
        printf("¼±ÅÃ : ");
        scanf("%d", &choice);
        if(choice == 0)
        break;
        if(choice < 1 || choice > 4)
        {
            printf("Àß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù.\n");
            continue;
            result = calculate(a, b, fp[choice - 1]);
            printf("[%s °á°ú] = %d\n", ops[choice - 1].op_name, result);
        }
        printf("ÇÁ·Î±×·¥ Á¾·á\n");
        return 0;
    }
}
