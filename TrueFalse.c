#include<stdio.h>
int main(){
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    printf("%d",number>9 && number<100);
    return 0;
}