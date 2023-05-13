#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
   
    int element;
    int n;
    int arr[7]={5,8,7,6,9,2,1};
    
     
        printf("enter element:\t");
        scanf("%d",&element);
        int size=sizeof(arr)/sizeof(int);
        int result=linearsearch(arr,size,element);
        printf("%d is found in index :\t %d ",element,result);

}