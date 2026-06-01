#include <stdio.h>

main()
{
    int a;
    printf("점수를 입력 하세요 : ");
    scanf("%d", &a);
    
    if((a % 10) == 0);
    {
        printf("입력 오류입니다.\n");
        return 0;
    }
    switch(a/10)
    {
        case 10:
            case 9:
                printf("당신은 A학점입니다.\n");
                break;
                
        case 8:
            printf("당신은 B학점입니다.\n");
            break;
            
        case 7:
            printf("당신은 C학점입니다.\n");
            break;
            
        case 6:
            printf("당신은 D학점입니다.\n");
            break;
            
        default:
            printf("당신은 F학점입니다.\n");
            break;
    }
    return 0;
}
