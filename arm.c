#include<stdio.h>
#include<math.h>
int len(long int a)
{
    int count=0;
    while (a>0)
    {
        count += 1;
        a = a/10;
    }
    return count;
}

int is_ams(long int a)
{
    long int r,l,n,sum=0;
    n=a;
    r=len(a);
    while(a>0)
    {
        l=a%10;
        sum = sum + pow(l,r);
        a=a/10;
    }
    if(n==sum)
        return 1;
    else
        return 0;
}

int main()
{
    long int i;
    for(i=1;i<=10000;i++)
    {
        if(is_ams(i)==1)
            printf("%ld\n",i);
    }
    return 0;
}