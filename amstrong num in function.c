#include <stdio.h>
int num(int n){
    int rem,cube,sum;
    int temp=n;
    while(temp!=0){
        rem=temp%10;
        cube=rem*rem*rem;
        sum=sum+cube;
        temp=temp/10;
    }if(n==sum){
        return 1;
    }else{
        return 0;
    }

}
int main() {
    int n;
    printf("ENTER THE NUMBER= ");
    scanf("%d",&n);
    int x;
    x=num(n);
    //printf("x");
    if(x==1){
        printf("amstrong num");
    }else{       
        
        printf(" not amstrong num");


    }
    
    
    return 0;
}