#include <stdio.h>
int main() {
    int attandance;
    printf("enter the attandance");
    scanf("%d",&attandance);
    if(attandance>=75){
        printf("are allowed");
    }
    else {
        printf("not allowed");
    }
    
    return 0;
}