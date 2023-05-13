#include<stdio.h>

void salting(char arr[]);
int main()
{
    char password[100];
    scanf("%s",password);
    salting(password);

}
void salting(char arr[])
{
    char salt[]="123"; 
    char newpass[200];                          
    strcpy(newpass,arr);                                                                                                
    strcat(newpass,salt);                                         
    puts(newpass);                                
}