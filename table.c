#include<stdio.h>
int main()
{
    int n,p;
    printf("enter the number \n");
    scanf("%d",&n);
    for (int i = 1; i <=50; i++)
    {
      p=n*i;
      printf("%d * %d = %d\n",n,i,p);  
    }
    return 0;
}