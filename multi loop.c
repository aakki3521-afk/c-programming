#include <stdio.h>
int main() {
    int i,n,m;
    //printf("enter the  num");
    scanf(" %d",&n);
    for(i=3;i<=10;i++){
        m=i*n;
        printf("%d%d=%d/n",i,n,m);
    }

    
    return 0;
}