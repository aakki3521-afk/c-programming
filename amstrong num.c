#include <stdio.h>
int main() {
    int n;//
    scanf("%d",&n);//
    int sum=0;//
    int temp=n;//
    while(temp!=0){//
        int rem=temp%10;//
        int cube=rem*rem*rem;//
        sum=sum+cube;//
        temp/=10;//
    }
    if(sum==n){//
        printf("amstrong number");//
    }
    else{
    printf("not an amstrong num");//
    }
    
    return 0;//
}