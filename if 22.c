#include <stdio.h>
int main() {
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%3==0 && a%7==0){
        printf("its divisible by 3 and 7");
    }
    else{
        printf("not divisible");
    }
    
    return 0;
}