#include<stdio.h>
int countodd( int arr[], int n);
int reverse( int arr[], int n);
int printarr( int arr[], int n);



int main(){
    int arr[]={1,2,3,4,5,6,7};
    printf("%d", countodd(arr,6));
    reverse(arr,5);
    printarr(arr,5);
    return 0;
    
}
int printarr(int arr[], int n){
    for (int  i = 0; i < n; i++)
    {
        printf("%d \t",arr[i]);
    }
    
}
int reverse( int arr[], int n){
    for ( int  i = 0; i < n/2; i++)
    {
        int  firstval=arr[1];
        int secondval=arr[n-i-1];
        arr[1]=secondval;
        arr[n-i-1]=firstval;
    }
    
}

int countodd( int arr[], int n){
     int count=0;
     for ( int  i = 0; i < n; i++)
     {
        if( arr[i]%2 !=0){
            count++;
        }
     } 
     return count;

     }
     
