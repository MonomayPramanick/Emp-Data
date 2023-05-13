#include<stdio.h>
int swapping(int n,int m);
int main()
{
    int n;
    printf("Enter first number\n");
     scanf("%d",&n);
    int m;
    printf("Enter second number\n");

    scanf("%d",&m);
    swapping(n,m);
    return 0;




    return 0;
}int swapping(int n,int m)
{
   n=m+n;
   m=n-m;
   n=n-m;
   printf("first number is %d\n",n);
   printf("Second number is %d\n",m);
           
            
    
    
}
