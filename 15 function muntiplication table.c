#include <stdio.h>
int table(int n){
    int m;
    for(int i=1;i<=10;i++){
        m=i*n;
        printf("%d*%d=%d\n",n,i,n*i);

    }return m;
}
int main() {
    int n;
    printf("ENTER THE NUMBER= ");
    scanf("%d",&n);
    int x;
    x=table(n);
    printf(x);
    
    return 0;
}