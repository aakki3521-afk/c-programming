#include <stdio.h>
int main() {
    int a,b;
    printf("enter the values");
    scanf("%d %d",&a,&b);
    if(a>b || b<a){
        printf("a is largest");
    }
    else{
        printf("b is largest");
    }
    
    return 0;
}