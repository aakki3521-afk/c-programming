#include <stdio.h>
int main() {
    int a;
    printf("enter the num");
    scanf("%d",&a);
    if(a%5==0){
        printf("its divisible by 5");
    }
    else{
        printf("not divisible by 5");
    }
    
    return 0;
}