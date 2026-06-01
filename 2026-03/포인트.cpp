#include <stdio.h>

main()
{
    char str1[3][10]={"hello","world","jang"};
    char *p_str1[3];
    for(int i=0;i<3;i++)
    {
        p_str1[i]=str1[i];
    }
    for(int i=0;i<3;i++)
    {
        printf("%s\n", p_str1[i]);
        printf("%c\n", p_str1[i][0]);
    }
}
