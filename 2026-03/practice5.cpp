#include <stdio.h>

int main()
{
      char x, y;
      printf("두 개의 문자를 입력하세요. (예 : A B)");
      scanf("%c %c", &x, &y); // 공백으로 구분하여 두 정수를 입력 받습니다.
      printf("입력받은 값 : x = %d, y = %d\n", x, y);
      printf("입력받은 값 : x = %c, y = %c\n", x, y);
      return 0; 
}
