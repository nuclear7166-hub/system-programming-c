#include <stdio.h>

int main()
{
    int i = 2, j, k;
    int mul;

    while (i <= 9)        
    {
        printf("%d´Ü\n", i);
        j = 1;

        while (j <= 9)      
        {
            mul = i * j;
            k = 0;

            while (k < 3)  
            {
                printf("%d x %d = %d\n", i, j, mul);
                k++;
            }

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

