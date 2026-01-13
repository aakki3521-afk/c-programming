#include <stdio.h>
int main() {
    int n;//145
    scanf("%d",&n);
    int x=n;//
    int sum=0;//1 2 8
    while(n!=0){//145!=0 t
        int rem=n%10;//145%10=5
        int fact=1;//1 2 6
        for(int i=1;i<=rem;i++){//1<5 t 2<5 t 3<5 t 4<5 t 5<=5 t
            fact*=i;
            //1*1=1 1*2=2 2*3=6 6*4=24 24*5=120
        }
    
        sum=sum+fact;//0+1 1+2 2+6=8 8+28=36 36+120=183
        n=n/10;
        
    }if(sum==x){
        printf("strong num");
    }else{
        printf("not a strong num");
    }
    
    return 0;
}