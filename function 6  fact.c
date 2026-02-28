#include <stdio.h>
int num(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main() {
    int n;
    printf("enter the num= ");
    scanf("%d",&n);
    int x;
    x=num(n);
    printf("%d",x);
    
    
    return 0;
}