#include <stdio.h>
int sum(int n){
    int tol=0;
    while(n!=0){
     int val=n%10;//
     tol=tol+val;//
     //n=n/10;
     }


    
    return tol;
}
int main() {
    int a;
    printf("enter the num=");
    scanf("%d",&a);
    int x;
    x=sum(a);
    printf(x);

    
    
    return 0;
}