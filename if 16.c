#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the values");
    scanf("%d %d %d  ",&a,&b,&c);
    int sum;
    scanf("%d",&sum);
    sum=a+b+c;
    if(sum=180){
        printf("its a triangle");
    }
    else{
        printf("not a triangle ");
    }
    
    return 0;
}