#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter the  number :\n");
    scanf("%d",&n);
    factorial(n);
    return 0;


}
int factorial(int n)
{    
     int fact=1;
    for (int i = 1; i<=n; i++)
    {
       fact=fact*i; 
    }
    printf("Factiorial is %d\n",fact);
    return 0;
    
}