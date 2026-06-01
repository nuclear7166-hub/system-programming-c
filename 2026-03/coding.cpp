#include <stdio.h>

int main(void)
{
    int i;
    char str[7] = "coding";
    printf("%s\n", str);
    printf("%d\n", sizeof(str));
    
    for( i = 0; i < sizeof(str); i++)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}
