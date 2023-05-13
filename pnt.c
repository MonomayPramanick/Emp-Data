#include<stdio.h>

int bmax( int  x, int y,int  *max,int *sum, int * avg);
int main(){
    int m,n;
    int max=0;
    int sum,avg;
    printf("Enetr first number");
    scanf("%d",&m);
    printf("enter second number");
    scanf("%d",&n);
    bmax(m, n , &max,&sum,&avg);

     
    return 0;
}
int bmax(int x, int  y,  int *max, int *sum, int *avg)
{   *sum=x+y;
    *avg=*sum/2;
    printf(" sum is %d\n avg is %d\n",*sum,*avg);
   if (x>y)
   {
    *max=x;
    printf(" max is %d \n",*max);
   }
   else{
    *max=y;
    printf("max is %d\n", *max);
   }
}