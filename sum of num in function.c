#include <stdio.h>
int num(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i; 
    }return sum;
}
int main() {
    int n;
    printf("enter the num= ");
    scanf("%d",&n);
    int z;
    z=num(n);
    printf("%d",z);
    return 0;
}