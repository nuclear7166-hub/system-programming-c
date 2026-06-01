#include <stdio.h>
main()
{
    int a = 5;     
    int*p = &a;
    int **p2 = &p;
    int ***p3 = &p2;
    printf("%p\n", &a);
    printf("%d\n", *p);
    printf("%p\n", *p2);
    printf("%d\n", **p2);
    printf("%p\n", **p3);
    printf("%d\n", ***p3);
    printf("%p\n", &a);
    printf("%p\n", &p);
    printf("%p\n", &p2);
    printf("%p\n", &p3);    
 } 
