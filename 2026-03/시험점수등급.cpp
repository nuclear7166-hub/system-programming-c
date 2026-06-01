#include <stdio.h>

main()
{
    printf("점수를 입력하세요 : ");
    int a;
    scanf("%d", &a);
    
    if(a > 100)
    {
        printf("입력 오류입니다.\n");
    }
    else if (a <= 100 && a >= 90)
    {printf("당신은 A학점입니다.""\n");
    }
    else if (a <= 90 && a >= 80)
    {printf("당신은 B학점입니다.""\n");
    }
    else if (a <= 80 && a >= 70)
    {printf("당신은 C학점입니다.""\n");
    }
    else if (a <= 70 && a >= 60)
    {printf("당신은 D학점입니다.""\n");
    }
    else if (a <= 60 && a >= 0)
    {printf("당신은 F학점입니다.""\n");
    }
}
