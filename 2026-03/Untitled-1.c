#include <stdio.h>

int main()
{
    int a = 0x12345678;
    char *p;
    p = (char *)&a;
    printf("Memory values : ");
    for(int i = 0; i < sizeof(int); i++)
    {
        printf("%02x ", *(p+1));
        printf("%02x ", p+i);
    }
    printf("\n");
    if(*p == 0x78)
          printf("Little Endian System\n");
    else
        printf("Big Endian System\n");
        
    return 0;
}