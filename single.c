#include <stdio.h>
int main() {
    int a;
    printf("enter the degit");
    scanf("%d",&a);
    if(a>=9 && a<=9){
        printf("its a single digit");
    }
    else {
        printf("not a single digit");
    }
    
    return 0;
}