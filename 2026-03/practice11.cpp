#include <stdio.h>

void fun(int* p);

int main() {
    int a[5] = {10, 23, 40, 50, 60};
    fun(a); 
    return 0;
}

void fun(int* p) {
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}
