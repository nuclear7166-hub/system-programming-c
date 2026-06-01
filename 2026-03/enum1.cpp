/*#include <stdio.h>

enum week
{
    SUN, MON, TUE, WED, THU, FRI, SAT
};

int main()
{
    enum week today;
    today = FRI;
    printf("today value = %d\n", today);
    return 0;
}

#include <stdio.h>

enum menu
{
    MENU_START, MENU_STOP, MENU_RESET
};

int main()
{
    enum menu m;
    m = MENU_RESET;
    switch(m) // m = 0
    {
        case MENU_START:
            printf("START 실행\n");
            break;
        case MENU_STOP:
            printf("STOP 실행\n");
            break;
        case MENU_RESET:
            printf("RESET 실행\n");
            break;
    }
    return 0;
}

#include <stdio.h>

typedef enum
{
    STUDYING,  RESTING, SLEEPING
}STATE;

typedef struct
{
    char name[20];
    STATE state;
}student;

int main()
{
    student s1 = {"SEO", STUDYING};
    printf("이름 : %s\n", s1.name);
    if(s1.state == STUDYING)
         printf("상태 : 공부중\n");
    else if(s1.state == RESTING)
         printf("상태 : 휴식중\n");
    else if(s1.state == SLEEPING)
         printf("상태 : 수면중\n");
    return 0;
}*/

#include <stdio.h>

typedef enum
{
    STOP, RUN, ERROR 
}STATE;

int main()
{
    STATE state = STOP;
    int command;
    while(1)
    {
        switch(state)
        {
            case STOP:
                printf("STOP 상태\n");
                printf("1:RUN  2:ERROR\n");
                scanf("%d", &command);
                if(command == 1)
                    state = RUN;
                else if(command ==2)
                    state = ERROR;
            break;
            case RUN:
                printf("RUN 상태\n");
                printf("0:STOP 2:ERROR\n");
                scanf("%d",&command);
                if(command == 0)
                    state = STOP;
                else if(command == 2)
                    state = ERROR;
            break;
            case ERROR:
                printf("ERROR 상태\n");
                printf("0:STOP\n");
                scanf("%d", &command);
                if(command == 0)
                    state = STOP;
            break;
        }
        return 0;
    }
}
