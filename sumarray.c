#include<stdio.h>
#include<math.h>
int sumarray( int a[],int n);
int main()
{
     int a[100];

    sumarray(a,10);

    return 0;
}
int sumarray(int a[],int n)
{
    int sum=0;
     for (int i = 1; i <= n; i++)
    {
        printf("enter the number for : %d \n", i);
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    printf("sum is \n%d",sum);
   // printf("%f",pi);
}