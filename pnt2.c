#include<stdio.h>

int main(){
int m;
printf("Enter the variable name\n");
scanf("%d",&m);
int *pnt=&m;
printf("%u",pnt);
}

