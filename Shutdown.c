#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("\n\n\t\t Study is best thing for life\n\n\n");
    char ch;
    printf("Do you want to shut down your laptop now(y/n)?");
    scanf("%c",&ch);
    if (ch=='Y' || ch=='y')
    {
        system("C:\\WINDOWS\\System32\\shutdown /S");
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}