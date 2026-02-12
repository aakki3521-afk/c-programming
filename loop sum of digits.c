#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
   // num=n;
    for(int i=n;i>0;i=i/10){
        int r=i%10;
        sum+=r;
    }
    printf("%d",sum);
    return 0;
}