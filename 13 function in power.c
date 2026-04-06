#include <stdio.h>
int num(int n,int m){
    int power=1;
    for(int i=0;i<m;i++){
        power=power*n;
    }

return power;
}
int main() {
    int n,m;
    printf("ENTER THE NUMBER= ");
    scanf("%d%d",&n,&m);
    int x;
    x=num(n,m);
    printf("%d",x);

    
    return 0;
}