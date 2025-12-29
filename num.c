#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==0){
        printf("the number is zero");
    }
    else if (a>0){
        printf("the num is positive");
    }
    else {
        printf("the num is negetive");
    }
    
    return 0;
}