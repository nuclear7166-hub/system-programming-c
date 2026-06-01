#include <stdio.h>

main()
{     char a[] = "hello";   int b[] = {1, 2, 3, 4, 5};
      char e[] = {'g', 'o', 'o', 'd', '\0'};
      int c = 20, d = 40, i, k = 0;
      printf("%s\n, a");  printf("%d\n",a);
      
      for(i = 0; i < 5; i++)
      printf("%d\n",b[i]);
      
      printf("%d\n",b);  printf("%d\n",&a);
      
      printf("%d\n",a);  printf("%d\n",&b);
      
      printf("%d\n",sizeof(a));            // a = 6바이트, b = 20바이트 
      
      printf("%d\n",sizeof(b)/sizeof(int));
      
      printf("%d\n",&b[0]);  printf("%d\n",&b[1]);
      
      printf("%d\n",&c);     printf("%d\n",&d);
      /*for(k = 0; k < 5; k++)
      {       printf("%c", e[k]);      } */
      while(e[k] != '\0')
      {          printf ("%c",e[k]);  k++;}
      printf("\n");
      printf("%d\n", sizeof(e));
      printf("%s",e);
}
