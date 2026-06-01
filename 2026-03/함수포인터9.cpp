/*#include <stdio.h>
int rising_edge(int input)
{   static int prev = 0; // 이전 상태 저장
    int edge = 0;
    if (prev == 0 && input == 1)
       edge = 1;
    prev = input;
    return edge;   }
int main()
{   int signal[] = {0, 0, 1, 1, 0, 1, 0, 1};
    for(int i=0;i<8;i++)
    {
        if(rising_edge(signal[i]))
            printf("Rising Edge Detected\n");   
    }
    return 0;
}*/

/*#include <stdio.h>
int falling_edge(int input)
{   static int prev = 0; 
    int edge = 0;
    if (prev == 1 && input == 0)
       edge = 1;
    prev = input;
    return edge;   }
int main()
{   int signal[] = {0, 0, 1, 1, 0, 1, 0, 1};
    for(int i=0;i<8;i++)
    {
        if(falling_edge(signal[i]))
            printf("falling Edge Detected\n");   
    }
    return 0;
}*/

/*#include <stdio.h>
void edge_detect(int input)
{   static int prev = 0;
    
    if(prev == 0 && input == 1)
            printf("Rising Edge\n");
    if(prev == 1 && input == 0)
            printf("Falling Edge\n"); 
    prev = input;
}
int main()
{   int signal[] = {0, 0, 1, 1, 0, 1, 0, 1};

    for(int i=0;i<8;i++)
            edge_detect(signal[i]);
}*/

#include <stdio.h>
void machine()
{
    static int state = 0;
    switch(state)
    {
        case 0:
            printf("INIT\n");
            state = 1;
            break;
        case 1:
            printf("RUN\n");
            state = 2;
            break;
        case 2:
            printf("STOP\n");
            break;
    }
}
int main()
{
    for(int i=0;i<5;i++)
       machine();
       return 0;
}
