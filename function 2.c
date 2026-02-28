#include <stdio.h>
int num(int a,int b){
    if(a>b){
        //printf("%d",a);
        return a;
    }else{
        //printf("%d",b);
        return b;
    }
} 
int main() {
    int a,b;
    printf("enter the num");
        scanf("%d%d",&a,&b);
int x=num(a,b);
printf("%d",x);


    
    return 0;
}