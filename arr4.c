#include<stdio.h>
int main(){
    int sum=0;
    int avg=0;
    int n;
    printf("enter how many number you store;\n");
    scanf("%d",&n);
    int arr[ n];
    
    for(int i=0;i<=n;++i){
        printf("enter the number for %d\n",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];



        
    }
    avg=sum/n;
    for(int i=0;i<=n;++i){
        printf("%d index : %d\n",i,arr[i]);
    }
    
    printf("sum is :%d\n",sum);
    
    printf("avg is : %d",avg);
    

}   
        