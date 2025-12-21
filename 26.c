#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the num");
    scanf("%d %d %d",&a,&b,&c);
    c=a-b;
    printf("%d",c);
    --c;
    printf("the decrement function of %d",c);
    return 0;

}