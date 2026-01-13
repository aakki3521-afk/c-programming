#include <stdio.h>
int main() {
    int a,b,i,r=1;
    scanf("%d %d",&a,&b);
    for( i=0;i<b;i++)
        r*=a;
    
    printf("%d",r);
    return 0;
}