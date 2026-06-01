#include <stdio.h>
main()
{
    int aa[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    int i, k;
    for (i = 0; i < 3; i++)
    {
        for(k = 0;k < 4; k++)
        {
            printf("%12d", aa[i][k]);
            printf("%12d",*(aa[i] + k));
            printf("%12d",aa[i] + k);
        }
        printf("\n");
    }
}
