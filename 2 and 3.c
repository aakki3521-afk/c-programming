#include <stdio.h>
int main() {
    int a;
    printf("enter the num");
    scanf("%d",&a);
    if(a%2==0 && a%3==0){
        //printf("its divisible by both 3 and 2");
        printf("yes");
    }
    else{
        //printf("not divisible by 2 and 3");
        printf("no");
    }
    
    return 0;
}