/*#include <stdio.h>

typedef struct score
{
    int kor, eng, mat;
    int total; // 구조체 total에서는 보통 0이 처음에 저장된다. 
} score;

int main()
{
    score s[3] = {{30, 35, 45}, {40, 60, 45}, {70, 80, 90}};
    score* p;
    p = s; // s == &s[0]
    
    s[0].total = s[0].kor + s[0].eng + s[0].mat;
    printf("%d\n", s[0].total);
    (p+0)->total = (p+0)->kor+(p+0)->eng+(p+0)->mat;
    printf("%d\n", (p+0)->total);
    p[0].total = p[0].kor + p[0].eng + p[0].mat;
    printf("%d\n", p[0].total);
}

//포인터배열을 이용  
#include <stdio.h>

typedef struct score 
{
    int kor, eng, mat;
    int total;
} score;

int main() 
{
    score s[3];
    score* p;
    int i;
    p = s;
     
    for(i=0;i<3;i++)
    {
        printf("%d번째 학생 점수 입력(국어 영어 수학): ", i+1);
        scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].mat);
    }
    printf("\n--- 결과 출력 ---\n");
    
    for(i=0;i<3;i++)
    {
        s[i].total = s[i].kor + s[i].eng + s[i].mat;
        printf("s[%d] total = %d\n", i, s[i].total);
        (p+i)->total = (p+i)->kor+(p+i)->eng+(p+i)->mat;
        printf("(p+i)->total = %d\n", (p+i)->total);
        p[i].total = p[i].kor + p[i].eng + p[i].mat;
        printf("p[%d] total = %d\n", i, p[i].total);
        (*(p+i)).total = (*(p+i)).kor+(*(p+i)).eng+(*(p+i)).mat;
        printf("(*(p+i)).total = %d\n", (*(p+i)).total);
        (*(s+i)).total = (*(s+i)).kor+(*(s+i)).eng+(*(s+i)).mat;
        printf("(*(s+i)).total = %d\n", (*(s+i)).total);
    }
}

#include <stdio.h>
#include <string.h>

typedef struct sco
{
    char name[20];
    int kor, eng, mat;
    int total;
}score;

int main()
{
    score s[3];
    score *p;
    int i;
    char *names[3] = {"jang", "lee", "park"}; // 배열 포인터지만 포인터  배열이 되어야함. 
    int kor[3] = {30, 40, 70}; // 포인터배열을 선언함 -> 주소가 저장되어야함.  
    int eng[3] = {35, 60, 80};
    int mat[3] = {45, 45, 90};
    p = s;
    for(i=0;i<3;i++)
    {
        strcpy(s[i].name, names[i]); // 이름 복사
        s[i].kor = kor[i];
        s[i].eng = eng[i];
        s[i].mat = mat[i];
    }
    for(i=0;i<3;i++)
    {
        s[i].total = s[i].kor + s[i].eng + s[i].mat;
        printf("%s %d\n", s[i].name, s[i].total);
        printf("%s %d\n", (p+i)->name, (p+i)->total);
        printf("%s %d\n\n",p[i].name, p[i].total);
    }
}

#include <stdio.h>

typedef struct score
{
    char name[20];
    int kor, eng, mat;
    int total;
}score;

int main()
{
    score s[3] = {
          {"jang", 30, 35, 45, 0},
          {"lee", 40, 60, 45, 0},
          {"park", 70, 80, 90, 0}
          };
    score *p;
    int i;
    p = s;
    printf("name kor eng mat total\n");
    
    for(i=0;i<3;i++)
    {
        p[i].total = p[i].kor + p[i].eng + p[i].mat;
        //(p+i)->total = (p+i)->kor + (p+i)->eng + (p+i)->mat;
        printf("%s %3d %3d %3d %3d\n",
                   p[i].name, p[i].kor, p[i].eng, p[i].mat, p[i].total); 
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct score
{
    char name[20];
    int kor, eng, mat;
    int total;
}score;

int main()
{
    score s[3];
    score temp;
    int i, j;
    char *names[3] = {"jang", "lee", "park"};
    int kor[3] = {30, 40, 70};
    int eng[3] = {35, 60, 80};
    int mat[3] = {45, 45, 90};
    for(i=0;i<3;i++)
    {
        strcpy(s[i].name, names[i]); 
        s[i].kor = kor[i];
        s[i].eng = eng[i];
        s[i].mat = mat[i];
        s[i].total = s[i].kor + s[i].eng + s[i].mat;
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(s[i].total < s[j].total)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("Rank Name Kor Eng Mat Total\n");
    for(i=0;i<3;i++)
    {
        printf(" %d   %s %3d %3d %3d %3d\n", i+1, s[i].name,
                      s[i].kor, s[i].eng, s[i].mat, s[i].total);
    }
    return 0;    
}

#include <stdio.h>
#include <string.h>

typedef struct score
{
    char name[20];
    int kor, eng, mat;
    int total;
}score;

int main()
{
    score s[3];
    score temp;
    int i, j;
    char *names[3] = {"jang", "lee", "park"};
    int kor[3] = {30, 40, 70};
    int eng[3] = {35, 60, 80};
    int mat[3] = {45, 45, 90};
    for(i=0;i<3;i++)
    {
        strcpy(s[i].name, names[i]); 
        s[i].kor = kor[i];
        s[i].eng = eng[i];
        s[i].mat = mat[i];
        s[i].total = s[i].kor + s[i].eng + s[i].mat;
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(s[i].total < s[j].total)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("Rank Name Kor Eng Mat Total\n");
    for(i=0;i<3;i++)
    {
        printf(" %d   %s %3d %3d %3d %3d\n", i+1, s[i].name,
                      s[i].kor, s[i].eng, s[i].mat, s[i].total);
    }
    return 0;    
}

#include <stdio.h>

void func(void *p)
{
    int *ip = (int *)p;
    printf("%d\n", *ip);
}

int main()
{
    int a = 10;
    func(&a);
}

#include <stdio.h>

void func(void *p)
{
    char *ip = (char*)p;
    printf("%d\n", *ip);
    printf("%c\n", *ip);
}

int main()
{
    char a = 'A';
    func(&a);
}

#include <stdio.h>
void func(void *p)
{
    int *ip = (int *)p;
    char *cp = (char *)p;
    printf("int value = %d\n", *ip);
    printf("char values (byte view) = ");
    for(int i=0; i<sizeof(int); i++)
    {
        printf("%d ",*(cp+i));
    }
    printf("\n");
}

int main()
{
    int a = 10;
    func(&a);
    return 0;
}

#include <stdio.h>

int main()
{
    int a = 0x12345678;
    char *p;
    p = (char *)&a;
    printf("Memory values : ");
    for(int i = 0; i < sizeof(int); i++)
    {
        printf("%02x ", *(p+i));
        printf("%02x ", p+i);
    }
    printf("\n");
    if(*p == 0x78)
          printf("Little Endian System\n");
    else
        printf("Big Endian System\n");
        
    return 0;
}

#include <stdio.h>

void print_big_endian(void *p)
{
    char *cp = (char *)p;
    printf("Big Endian view : ");
    for(int i = sizeof(int)-1; i >= 0; i++)
    {
        printf("%02x ", *(cp+i));
    }
    printf("\n");
}

int main()
{
    int a = 10;
    printf("Original value : %d\n", a);
    print_big_endian(&a);
    return 0;
}*/
