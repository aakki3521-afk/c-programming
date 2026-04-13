#include <stdio.h>
int num(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        if(n%i==0){
          sum++;}
    }
        return (sum==2);
        //{
            //printf("prime");
        //}else{
           // printf("not a prime");
        //}
    }

int main() {
    int n;
    printf("enter the num= ");
    scanf("%d",&n);
    int v;
    v=num(n);
    if(v==1){
        printf("its prime");
    }else{
        printf("not a prime");
    }
    //printf(x);
    return 0;
}