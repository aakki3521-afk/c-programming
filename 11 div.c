#include <stdio.h>
int main() {
    int a;
    printf("enter the num");
    scanf("%d",&a);
    if(a%11==0){
        printf("its divisible by 11");
    }
    else{
        printf("not divisible by 11");
    }
    
    return 0;
}