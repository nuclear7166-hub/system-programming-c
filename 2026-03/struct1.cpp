#include <stdio.h>
#include <string.h>

// float 4byte / double 8byte
// 처음에 지정을하지 않아도 된다. strcpy로 지정가능 

int main()
{
    char name[5][10];
    int kor[5];
    int eng[5];
    float ave[5];
    int i;
    
    strcpy(name[0], "kim");
    kor[0] = 90;
    eng[0] = 80;
    ave[0] = (kor[0]+eng[0])/2.0;
    
    strcpy(name[1], "lee");
    kor[1] = 70;
    eng[1] = 60;
    ave[1] = (kor[1]+eng[1])/2.0;
    
    strcpy(name[2], "park");
    kor[2] = 70;
    eng[2] = 60;
    ave[2] = (kor[2]+eng[2])/2.0;
    
    strcpy(name[3], "seo");
    kor[3] = 90;
    eng[3] = 90;
    ave[3] = (kor[3]+eng[3])/2.0;
    
    strcpy(name[4], "jung");
    kor[4] = 50;
    eng[4] = 40;
    ave[4] = (kor[4]+eng[4])/2.0;
    
    for(i=0;i<5;i++)
    {
        printf("학생 이름 : %s\n", name[i]);
        printf("국어 점수 : %d\n", kor[i]);
        printf("영어 점수 : %d\n", eng[i]);
        printf("평균 점수 : %4.1f\n", ave[i]);
        printf("\n");
    }
}
