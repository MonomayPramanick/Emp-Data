#include <stdio.h>
#include<math.h>
void main()
{
    int i,sum=0,num,count=0,r=0;
    printf("Amstrong number: ");
    for(i=1;i<10000;i++)
    {
        num=i;
        while(num!=0){
            num=num/10;
            count++;
        }
        num=i;
        //sum=pow(num%10,count)+pow((num%100-num%10)/10,count)+pow((num%1000-num%100)/100,count)+pow((num%10000-num%1000)/1000,count);
       while(num!=0){
            r=num%10;
            sum+= pow(r,count);
            num=num/10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
        count=0;
        sum=0;
    }
}