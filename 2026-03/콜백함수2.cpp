#include <stdio.h>
int event = 1;
void UserFunc()
{    printf("B");} 
void SystemFunc(void (*fp)())
{    if(event)
      fp();
    printf("c");     }
int main()
{
    SystemFunc(UserFunc);
    printf("d");
}
