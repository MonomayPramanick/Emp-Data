#include<stdio.h>
int main(){
        int n;
        printf("Enter a number ;");
 scanf("%d",&n);
 int i;
 int *k;
 while (i<=n)
 {
      *k=(*k)*i;
      i++;
        /* code */
 }

 printf(" product is\n %d",k);
 
 FILE *fptr;
 fptr=fopen("monomay.txt","w");
 

 fprintf(fptr,"%d",&k);
 return 0;

}
