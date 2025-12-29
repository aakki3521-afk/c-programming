#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b && b<a){
        printf("a is the largest");
   }
   else {
    printf("b is largest");
   }
    
    return 0;
}