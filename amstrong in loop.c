#include <stdio.h>
int main() {
    int n,sum=0;
    int temp=n;
    scanf("%d",&n);
    while(n!=0){//153 15 1 
        int num=n/10;//3 5 1
        int cube=num*num*num;//27+125=152+1 `153
        sum=sum+cube;//27 152 153
        n=n/10;//15 1 
    }
    if(sum==n){
        printf("anstrong num");
    }else{
        printf("not an amstrong num");
    }

    
    return 0;
}