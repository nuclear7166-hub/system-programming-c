#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *pc;
    int i;
    //pc=(char *)malloc(sizeof(char)*100);
    //pc=(char *)malloc(100);
    pc = (char *)calloc(100, sizeof(char));
    for(i=0;i<26;i++)
    {
        *(pc+i)='a'+i;
    } 
    *(pc+i) = '\0';
    printf("%s\n", pc);
    free(pc);
}
