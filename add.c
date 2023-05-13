 #include<stdio.h>
int add(int n,int m);
int sub(int n,int m);
int main()
{
    int n;
    printf("Enter first number\n");
     scanf("%d",&n);
    int m;
    printf("Enter second number\n");

    scanf("%d",&m);
   add(n,m);
   sub(n,m);



    return 0;
}
int add(int n,int m)
{ int sum;
 sum=n+m;
   printf("sum is  \n%d\n",sum);
};
int sub(int n,int m)
{  int subs;
   if (n>m)
   {
    subs=n-m;
   }
   else
   {
    subs=m-n;
   }
   printf("Substraction is \n%d",subs);
   return 0;
      
}
