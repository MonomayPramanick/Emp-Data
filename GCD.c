#include<stdio.h>
int GCD(int n1,int n2);
int main()
{
    int n1, n2;
    printf("Enter the  number :\n");
    scanf("%d",&n1);
    printf("Enter the  number :\n");
    scanf("%d",&n2);
    GCD(n1,n2);
    return 0;


}
int GCD(int n1,int n2)
{   int gcd=1; 
    
    for (int i = 1; i<=n1 && i<=n2; i++)
    {
       if (n1%i==0 && n2%i==0 )
       {
        gcd=i;
       }
        
    }
    printf("G.C.D is %d\n",gcd);
    return 0;
    
}