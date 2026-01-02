#include <stdio.h>
int main() {
    int n,i;//n=5
    scanf("%d",&n);
    int sum=0;//1
    for(i=1;i<=n;i++){//i=1 i<=5 t i=2 2<=2 t i=3 3<=5 t 4<=5 t 5<=5 t
        if(n%i==0){//5%1=0 t 5%2 f 5%3=0 f 5%4=0 f 5%5=0 t
        sum++;}//0+1=1 1+1=2
    }if(sum ==2){
        printf("prime number");
    }
    else{
        printf("not a prime number");
    }

    
    return 0;
}