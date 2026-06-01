#include <stdio.h>

main()
{     int aa[3][4]; int i, k;   int val=1;
      for(i = 0; i < 3; i++)
      {     for(k = 0; k < 4; k++)
                  { aa[i][k]=val; val++; }   }
      
      for(i = 0; i < 3; i++)
      {     for(k = 0; k < 4; k++)
            {     printf("%2d\t", aa[i][k]);      }
            printf("\n");    }
            printf("%u\n",aa);   printf("%u\n",aa[0]);
            printf("%u\n",aa[0]+2);  printf("%u\n",aa[1]);
            printf("%u\n",aa[0][0]);  printf("%u\n",&aa[0][0]);
            printf("%u\n",aa[2][3]);  printf("%u\n",&aa[2][3]);
            printf("%u\n",aa[0][0]+1);  printf("%u\n",&aa[0][0]+1);}
