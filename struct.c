#include<stdio.h>
typedef struct bankacc{
    int acc;
    char name[100];
} acc;
 struct vector{
    int x;
    int y;
 };
 void calcsum( struct vector v1,struct  vector v2,struct vector sum);
 struct complex{
    int real;
    int img;
 };
    
 
 
 
int main(){
    acc acc1={123,"monomay"};
    acc acc2={124,"sourav"};
    printf("acc no = %d",acc1.acc);
    printf("  name = %s", acc1.name);
   struct complex number1={5,10};
   struct complex *ptr=&number1;
   printf("real part = %d\n",ptr->real);
   printf("img part = %d\n",ptr->img);

    return 0;
}
void calcsum( struct vector v1,struct  vector v2,struct vector sum){
    sum.x=v1.x +v2.x;
    sum.y=v1.y +v2.y;
    printf("sum of x is %d \n",sum.x);
    printf("sum of y is %d \n",sum.y);
}