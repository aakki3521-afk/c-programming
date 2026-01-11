#include <stdio.h>
int main() {
    int n,d=0,a=1;
    scanf("%d",&n);
    while(n){
        d=d+(n%2)*a;
        a=a*10;
        n=n/2;
    }printf("%d",d);
    return 0;
}