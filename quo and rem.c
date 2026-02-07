#include <stdio.h>
int main() {
    int a,b,quo,rem;
    scanf("%d %d",&a,&b);
    quo=a/b;
    printf("%d\n",quo);
    rem=a%b;
    printf("%d",rem);
    
    return 0;
}