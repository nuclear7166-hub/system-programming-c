#include <stdio.h>
void counter()
{    static int count = 0; // static º¯¼ö 
     count++;
     printf("count = %d\n", count); }

int main()
{   counter();
    counter();
    counter();
    return 0;
 } 
