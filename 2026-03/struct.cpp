#include <stdio.h>
struct tagsungjuk  // typedef struct tagsungjuk 도 가능하다. 
{
    int kor;
    int eng;
    int math;
};
int main()
{
    struct tagsungjuk sj; // typedef을 사용하게되면 struct없이 사용 가능하다. 
    sj.kor = 100;
    sj.eng = 95;
    sj.math = 99;
    printf("총 합 = %d", sj.kor + sj.eng + sj.math);
}
