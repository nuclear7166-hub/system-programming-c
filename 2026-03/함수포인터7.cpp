#include <stdio.h>
int global_var = 0;
void func()
{
    int auto_var = 0;
    auto_var++;
    global_var++;
    printf("auto_var = %d, global_var = %d\n", auto_var, global_var);
}
int main()
{
    func();
    func();
    func();
    printf("global_var = %d\n", global_var);
    return 0;
}
