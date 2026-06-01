#include <stdio.h>

main()
{
    int arr[2][3] = {{10,20,30},{40,50,60}};
    
    printf("%d\n", *arr[0]);
    printf("%d\n", *(arr[0])+1);
    printf("%d\n", *(arr[0]+1));
    printf("%d\n", *arr[1]);
    printf("%d\n", arr[0][2]);
    printf("%d\n", *arr[0]+1);
    printf("%d\n", *arr[0+1]+1);
    printf("%d\n", arr[0][1]);
    printf("%d\n", arr[1][0]);
    printf("%d\n", arr[0]);
    printf("%d\n", &arr[0][1]+1);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", *(arr+1)+1);
    printf("%d\n", *(*(arr+1))+1);
}
