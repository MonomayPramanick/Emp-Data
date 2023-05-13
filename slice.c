#include<stdio.h>

void slice(char arr[],int n,int m);
int main()
{
    char password[100];
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%s",password);
    slice(password,n,m);

}
void slice(char arr[],int n,int m)
{
  char newstr[100];
  int i,j;
  for(i=n,j=0;i<=m;i++,j++)
  {
    newstr[j]=arr[i];
  }
  newstr[j]='\0';
  puts(newstr);

                                
}