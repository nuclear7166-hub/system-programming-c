#include <stdio.h>
int isodd(int value)
{   if(value % 2 == 1)
     return 1;   return 0; }
int iseven(int value)
{   if(value % 2 == 0)
     return 1;   return 0; }
void showif(int *arr, int size, int (*pred)(int))
{
    int i;
    for(i = 0;i<size;i++)
          if(pred(arr[i]))
              printf("%d\t", arr[i]);
          printf("\n");}
int main()
{   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    showif(a,10,isodd);
    showif(a,10,iseven);}
