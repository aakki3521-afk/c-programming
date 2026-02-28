#include <stdio.h>
int sum(int n){
    int tol=0;
    while(n!=0){
     int val=n%10;//
     tol=tol*10+val;//
     n=n/10;
     }
    //return tol;
    if(tol==n){
        printf("polindrome");
    }else{
        printf("not a polindrome");
    }
}
int main() {
    int a;
    printf("enter the num=");
    scanf("%d",&a);
    int x;
    x=sum(a);
    printf("%d",x);

    
    
    return 0;
}