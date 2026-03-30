#include <stdio.h>
int main() {
    int n,rem,i,sum,rev;
    scanf("%d",&n);
    sum==0;
    while(n!=0){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
if(sum==n){
    printf("its a polindrome");
}else{
    printf("not a polindrome");
}

    
    return 0;
}