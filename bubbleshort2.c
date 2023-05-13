#include<stdio.h>
/*int enterarr(int *arr,int n)
{
    for (int i = 1; i < n; i++)
    {
        scanf("%d",arr[i]);
    }
    
}*/
int printarr(int *A,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",A[i]);
    }
    printf("\n"); 
}
int bubbleshort(int *a,int n)
{ int temp;
 
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    
}
int main()
{ 
    int A[5]={5,15,12,14,19};
    int n=5;
   
    printarr(A,n);
    bubbleshort(A,n);
    printarr(A,n);

}  