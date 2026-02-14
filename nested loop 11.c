#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        for( j=1;j<=i;j++){
            printf("%d",j);}

            if(j%2!=0){
                printf("1\n");

            }else{
                printf("0\n");
            
        }
    }printf("\n");
    
    return 0;
}