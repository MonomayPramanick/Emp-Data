  #include<stdio.h>
  void swap(int *a,int *b);
  int main()
  {
    int a,b;
  printf("Enter the  number :\n");
    scanf("%d",&a);
     printf("Enter the  number :\n");
    scanf("%d",&b);
    printf("Before swapping a=%d,b=%d\n",a,b);
    swap(&a,&b);
  }
   void swap(int *a,int *b)
   {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swap a=%d,b=%d",*a,*b);
   }