#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    int lcm=1;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter 2nd number \n");
    scanf("%d",&b);
    for (int i = 1; i <=a; i++)
    {
        if (a%i==0 && b%i==0)
        {
             lcm=lcm*i;
            a= a/i;
            b=b/i;
        }
        
    }
    lcm=lcm*a*b;
    printf("lcm is %d \n",lcm);
}