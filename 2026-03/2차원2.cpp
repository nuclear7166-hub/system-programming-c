#include <stdio.h>

main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=arr;
    for(int i=0;i<10;i++)
    {
        printf("%d\n", &arr[i]);
        printf("%d\n", arr[i]);
    }
        printf("\n");
        for(ptr=arr;ptr<arr+10;ptr++)
        {
            printf("%d\n",ptr);
            printf("%d\n",*ptr);
        }
            printf("\n");
}
