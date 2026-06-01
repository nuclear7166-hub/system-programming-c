#include <stdio.h>

main ()
{
    int i;
    char a[5];
    for(i = 0; i < 5; i++)
    {scanf("%c", &a[i]);}
    a[2] = 'd';
    printf("%c\n", a[2]);
    for(i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
        printf("%d\n", a[i]);
        printf("%d\n", &a[i]);
    }
 } 
