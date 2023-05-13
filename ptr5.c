#include<stdio.h>

int main()
{
int age=22;
int *ptr=&age;
int page=*ptr;
int **pptr=&ptr;
printf("%d\n",age);
printf("%d\n",ptr);
printf("%p\n",ptr);
printf("%u\n",ptr);
printf("%d\n",page);
printf("%d\n",*(&age));
printf("%d\n",*pptr);
return 0;




}
