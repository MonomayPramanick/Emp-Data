#include <stdio.h>
int main()
{
    int arr[5], sum =0,avg;
    printf("enter 5 number \n");
    for (int i = 0; i <= 4; ++i)
    {
        printf("enter the number for : %d \n", i);
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    // printf("dispalying the integer");

    for (int i = 0; i <= 4; ++i)
    {
        printf("%d index : %d \n", i, arr[i]);
    }
    avg=sum/5;
    printf("average is %d\n",avg);
    
    return 0;
}
