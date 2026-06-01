//구조체를 사용하여 학생 정보를 저장
//배열을 사용하여 3명의 학생 정보를 저장
//포인터를 사용하여 배열을 처리
//각 학생의 총점과 평균을 계산
//평균이 60점 이상이면 "합격", 아니면 "불합격"을 출력(조건문 사용) 
//총점을 기준으로 올림차순 정렬(반복문 사용) 
//최종결과를 출력
//풀은 문제에 대해 설명 
// 8번서현우 

#include <stdio.h>
#include <string.h>


typedef struct Student 
{
    char name[10];
    int kor, eng, mat;
    int total;
    float ave;
} Student;

int main() 
{
    Student s[3] = 
    {
        {"LEE", 90, 80, 70},
        {"KIM", 85, 70, 60},
        {"PARK", 60, 50, 40}
    };

    Student *ptr = s;
    int i, j;
    Student temp;

    for (i = 0; i < 3; i++) 
    {
        ptr[i].total = ptr[i].kor + ptr[i].eng + ptr[i].mat;
        ptr[i].ave = ptr[i].total / 3.0;
    }

    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2 - i; j++) 
        {
            if (ptr[j].total > ptr[j+1].total) 
            {
               temp = ptr[j];
               ptr[j] = ptr[j+1];
               ptr[j+1] = temp;
            }
        }
    }

    printf("이름 국어 영어 수학 총점 평균 결과\n");
    for (i = 0; i < 3; i++) 
    {
        printf("%s %d  %d  %d  %d  %.1f  ", 
               ptr[i].name, ptr[i].kor, ptr[i].eng, 
               ptr[i].mat, ptr[i].total, ptr[i].ave);
        
        if (ptr[i].ave >= 60) 
        {
            printf("합격\n");
        } else 
        {
            printf("불합격\n");
        }
    }
    return 0;
}
