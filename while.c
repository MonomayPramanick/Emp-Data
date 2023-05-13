#include<stdio.h>
int main(){
    int i;
    int sum=0;
do
{
   printf("Enter the number :");
   scanf("%d",&i);
   sum=sum+i;
   if(i==0)
   {
    printf("sum is %d",sum);
   }


} while (i!=0);

return 0;
}
