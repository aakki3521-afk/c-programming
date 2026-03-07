#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
     for(int i=n;i>0;i--){
        
        for(int k=i;k<=n;k++){
            printf("%d",n-i);

        }for(int j=1;j<=(2*i)-1;j++){
            printf("%d",i);
        }
        printf("\n");
     }

     for(int i=2;i<=n;i++){

        for(int k=0;k<=n-i;k++){
            printf("%d",n-i); 

        }for(int j=1;j<=(2*i)-1;j++){
            printf("%d",i);
        }
        printf("\n");
     }
    
    return 0;
}