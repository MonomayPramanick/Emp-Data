#include<stdio.h>
 int main(){
   float m,n;
   char k;
   printf("enter  what to do in +,-,*,/\n");
    scanf("%c",&k);
   printf("enter  first number");
   scanf("%f",&m );
   printf("enter  second number");
   scanf("%f",&n);
   

         if(k=='+'){
            printf("sum is %f\n",m+n);
         }
         if(k=='-'){
            if(m>n){
            printf("Result is %f\n",m-n);
            }
            else{
               printf("Result is %f\n",n-m);
            } 
         }
         if(k=='*'){
            printf("Result is %f\n",m*n);
         }
         if(k=='/')
         {
            printf("Result is %f\n",m/n);
         }
         else{
            printf("Thank you ");
         }


     
   

 }