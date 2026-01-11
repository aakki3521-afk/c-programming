#include <stdio.h>
int main() {
    int n;
    int sum=0,prime;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
prime=1;
    for(int j=2;j*j<=i;j++)
        if(i%j==0)
            prime=0;
        if(prime)
            sum=sum+i;
        
    }printf("%d",sum);
     
    return 0;
}