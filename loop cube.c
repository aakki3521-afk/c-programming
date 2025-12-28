#include <stdio.h>
int main() {
    int n,i,m;
    printf("enter the num");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        m=i*i*i;printf("the cubes of the %d=%d/n",i,m);
    }
    
    return 0;
}