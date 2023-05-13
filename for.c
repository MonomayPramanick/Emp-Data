#include <stdio.h>
int main()
{
  char z = '*';
  char y = 5;
  char x;
  printf("enter a number");
  scanf("%c", &x);
  for (char i = 0; i <= x; i++)
  {
    printf("%c/n", y * z);
  }

  return 0;
}