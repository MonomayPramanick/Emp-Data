#include<stdio.h>


int main(){
        int marks[5];
        for (int i = 0; i <5; ++i)
        {
            printf("enter the number");
            scanf("%d",&marks[i]);
        }

        for (int i = 0; i < 5; ++i)
        {
            printf("%d\n",marks[i]);
        }
        
        return 0;
        
}
