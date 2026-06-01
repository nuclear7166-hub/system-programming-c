#include <stdio.h>

main()
{
    char s1[] = "strawberry";
    char s2[10];
    int len;
    printf("문자열을 입력하세요 : ");
    gets(s2);
    printf("%s\n", s2);        printf("%s\n", s1);
    puts(s2);    puts(s1);
    len = sizeof(s1);
    printf("%d\n", len);
}
