#include<stdio.h>
int main()
{
    
    int a;
    printf("Enter the marks1 \n");
    scanf("%d",&a);
    int n=0;
    while(n<=a)
    {
     
    if (n%2!=0)
    {
      printf("%d\n",n);
    }
    n++;
    }
    return 0;
  
   
  
}