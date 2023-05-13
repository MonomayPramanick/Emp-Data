#include<stdio.h>

int main()
{
    int arr[10],max=0;
    for (int  i = 0; i <10; i++)
    {
        printf("enter the number for %d \n",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <10; ++i)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }
    }
    printf(" Max is %d",max);

        
        
        
        
       
    
    return 0;
}