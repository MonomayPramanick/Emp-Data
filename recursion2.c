#include<stdio.h>
int factiorial(int n);
int main()
{
    int n,a;
    printf("Enter first number\n");
     scanf("%d",&n);
    

   
    a= factiorial(n);
    printf("Factiorial is \n%d",a);
    return 0;

}int factiorial(int n)
{int fact;
 if(n>=1)
 {
     return n*factiorial(n-1);
 }
 
 else{

  return 1;
 }

   return 0;
}
