/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Class_1 = 10, Class_2=5;
    int Melon_1 = 5, Melon_2=10;
    int Total = preparation(&Class_1, &Melon_1, &Class_2, &Melon_2);
    printf("total melon = %d\n", Total);
    return 0;
}
int preparation(int* class_1, int* melon_1, int* class_2, int* melon_2)
{
    int total = (*class_1)*(*melon_1) + (*class_2)*(*melon_2);
    return total;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int preparation(int* Class_1, int* Melon_1, int* Class_2, int* Melon_2)
{   
    int total = (*Class_1)*(*Melon_1) + (*Class_2)*(*Melon_2);
    return total;
}
//void show_something()
//{    printf("I have nothing to show!!\n"); }
int main()
{
    int Class_1 = 10, Class_2=5;
    int Melon_1 = 5, Melon_2=10;
    int ptr_total = preparation(&Class_1, &Melon_1, &Class_2, &Melon_2);
//    show_something();   
    printf("total melon = %d\n", ptr_total);
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int *preparation(int* Class_1, int* Melon_1, int* Class_2, int* Melon_2)
{   int* Total = (int*)malloc(sizeof(int));
    *Total = (*Class_1)*(*Melon_1) + (*Class_2)*(*Melon_2);
    return Total;
}
void show_something()
{    printf("I have nothing to show!!\n"); }
int main()
{
    int Class_1 = 10, Class_2=5;
    int Melon_1 = 5, Melon_2=10;
    int* ptr_total = preparation(&Class_1, &Melon_1, &Class_2, &Melon_2);
    show_something();   
    printf("total melon = %d\n", ptr_total);
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int *preparation(int* Class_1, int* Melon_1, int* Class_2, int* Melon_2)
{   
    int Total = (*Class_1)*(*Melon_1) + (*Class_2)*(*Melon_2);
    return &Total;
}
//void show_something()
//{    printf("I have nothing to show!!\n"); }
int main()
{
    int Class_1 = 10, Class_2=5;
    int Melon_1 = 5, Melon_2=10;
    int* ptr_total = preparation(&Class_1, &Melon_1, &Class_2, &Melon_2);
//    show_something();   
    printf("total melon = %d\n", *ptr_total);
    return 0;
}*/ 

#include <stdio.h>
#include <stdlib.h>

int preparation(int Class_1, int Melon_1, int Class_2, int Melon_2)
{   
    int Total = Class_1*Melon_1 + Class_2*Melon_2;
    return Total;
}
int main()
{
    int result;
    int(*ptr_function)(int, int, int, int);
    ptr_function = preparation;
    result = (*ptr_function)(5, 10, 10, 5);
    //result = ptr_function(5, 10, 10, 5);
    printf("total melons = %d\n", result);
        return 0;
}
