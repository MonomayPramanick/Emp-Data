#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    fibonacci(n);
    return 0;




    return 0;
}int fibonacci(int n)
{
    int a=0;
    int b=1;
    int c;
    for (int i = 0; i <=n; i++)
    { 
    
       
        printf("%d , ",a);
            c=a+b;
            a=b;
            b=c;
            
    }
    
}
