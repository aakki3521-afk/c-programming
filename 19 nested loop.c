#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int space=1;space<(n-i)*2;space++){
            printf(" ");
        }for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int space=1;space<(n-i)*2;space++){
            printf(" ");
        }for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    
    
    
    return 0;
}
