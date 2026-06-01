#include <stdio.h>

main()
{
    int i, j=10,k=20;
    int a[5];
    for(i=0;i<5;i++)
    {scanf("%d", &a[i]);}
    
    for(i=0;i<5;i++)
    {printf("%d\n", a[i]);
    printf("%d\n", &a[i]);}
    printf("%d\n",j);      printf("%p\n",j);
    printf("%d\n",k);      printf("%p\n",k);
    printf("%d\n",i);      printf("%p\n",i);
}
