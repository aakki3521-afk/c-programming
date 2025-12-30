#include <stdio.h>
int main() {
    int a,sum=0,d;
    printf("enter the num");
    scanf("%d",&a);
    //on=a;
    while(a!=0){
        d=a%10;
        sum+=d;
        a=a/10;
    }
printf("sum of the digits=%d/n",sum);
    
    return 0;
}