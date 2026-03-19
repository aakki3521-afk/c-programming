#include <stdio.h>
int main() {
    int n;//6
    scanf("%d",&n);
    int sum=0;//1 3 6
for(int i=1;i<=n/2;i++){//i=1 1<=6 2<=6 t 3<=6 t 4<=6 
    if(n%i==0){//6%1=0 t 6%2=0 t 6%3=0 t 6%4=0 f
        sum=sum+i;//0+1=1 1+2=3 3+6
    }//printf("%d",sum);
}if(sum==n){
    printf("its a perfect num");
}else{
    printf("not a perfect num");
}
    
    
    return 0;
}