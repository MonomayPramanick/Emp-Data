# include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    int class;

};


int main(){
    struct student s1;
    s1.roll=1;
    strcpy(s1.name,"m
    .onomay");
    s1.class=9;
    printf("%d\n",s1.roll);
    printf("%d\n",s1.class);
    printf("%s\n",s1.name);
    



}