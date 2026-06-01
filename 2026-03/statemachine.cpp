/*#include <stdio.h>

typedef enum
{
    STATE_IDLE, STATE_START, STATE_RUN, STATE_STOP
}State;

void machine()
{
    static State state = STATE_IDLE;
    switch(state)
    {
        case STATE_IDLE:
            printf("IDLE\n");
            state = STATE_START;
        break;
        case STATE_START:
            printf("START\n");
            state = STATE_RUN;
        break;
        case STATE_RUN:
            printf("RUN\n");
            state = STATE_STOP;
        break;
        case STATE_STOP:
            printf("STOP\n");
        break;
    }
}
int main()
{
    for(int i=0;i<5;i++)
    machine();
}

#include <stdio.h>

typedef enum
{
    IDLE, RUN
}State;

void machine(int start_signal)
{
    static State state = IDLE;
    switch(state)
    {
        case IDLE:
            if(start_signal)
            {
                printf("Start Machine\n");
                state = RUN;
            }
        break;
        case RUN:
            printf("Running\n");
        break;
    }
}
int main()
{
    machine(0);
    machine(1);
    machine(0);
}

#include <stdio.h>

typedef enum
{
    IDLE, RUN, STOP
}State;

State table[] =
{
    RUN, STOP, IDLE 
};

void machine()
{
    static State state = IDLE;
    printf("State = %d\n", state);
    state = table[state];
    printf("State = %d\n", state);
}

int main()
{
    for(int i=0;i<5;i++)
            machine();
}

#include <stdio.h>

void state_idle();
void state_run();
typedef void (*StateFunc)();
StateFunc current_state;
void state_idle()
{
    printf("IDLE\n");
    current_state = state_run;
}
void state_run()
{
    printf("RUN\n");
}
int main()
{
    current_state = state_idle;
    for(int i=0;i<3;i++)
    {
        current_state();
    }
}

#include <stdio.h>

void state_idle(void);
void state_run(void);
void (*current_state)(void);
void state_idle(void)
{
    printf("IDLE\n");
    current_state = state_run;   // 다음상태로 변경
}
void state_run(void)
{
    printf("RUN\n");
}

int main(void)
{
    current_state = state_idle; // 초기상태 
    for(int i=0;i<3;i++)
    {
        current_state();        // 현재 상태 함수 실행 
    } 
    return 0;
}*/

//Hierarchical State Machine
#include <stdio.h>

typedef enum
{
    SYSTEM_IDLE, SYSTEM_RUN
}SystemState;

typedef enum
{
    RUN_MOTOR, RUN_SENSOR
}RunState;

void machine()
{
    static SystemState sys = SYSTEM_IDLE;
    static RunState run = RUN_MOTOR;
    switch(sys)
    {
        case SYSTEM_IDLE:
            printf("System Idle\n");
            sys = SYSTEM_RUN;
        break;
        case SYSTEM_RUN:
            switch(run)
            {
                case RUN_MOTOR:
                    printf("Motor Run\n");
                    run = RUN_SENSOR;
                break;
                case RUN_SENSOR:
                    printf("Sensor Check\n");
                break;
            }
        break;
    }
}

int main()
{
    for(int i=0;i<4;i++)
    machine();
}
