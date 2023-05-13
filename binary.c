#include<stdio.h>
int binarysearch(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    
    while (low<=high)
    {mid=(low + high)/2;
    if(arr[mid]==element)
    {
        return mid;
    }
    if(arr[mid]<element)
    {
        low=mid+1;

    }
    if (arr[mid]>element)
    
    {
       high =mid-1;
    }
    }
    return -1;
}
int main()
{
    int arr[]={60,98,101,106,115,116,147,149,199,200};
    int size=sizeof(arr)/sizeof(int);
    int element=101;
    int result=binarysearch(arr,size,element);
    printf("%d is found in index :\t %d ",element,result);
    return 0;

}