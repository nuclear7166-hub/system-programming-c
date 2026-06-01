#include <stdio.h>

main()
{
    char a;
    int i;
    for(i = 0; i<5; i++)
    {
        scanf(" %c", &a);
        switch(a)
    {
        case 'A': printf("a\n");
        break;
        
        case 'C': printf("b\n");
        break;
        
        default : printf("no\n");  // 여기서 default는 else와 같은 맥락 
        }
    }
}
