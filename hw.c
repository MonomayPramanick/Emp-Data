#include <stdio.h>
int main()
{
    char x;

    printf("enter a number");
    scanf("%c", &x);

    if (x >='0' && x <= '9')
    {
    printf("Digit number"); /* code */
    }
    else
    {
    printf(" Not digit");
    }
    return 0;
}