#include <stdio.h>
int main() {
    int n,p,price;
    scanf("%d",&n);
    //scanf("%d",&p);
    int a[n];
    for(int price=0;price<n;price++){
        scanf("%d",&a[price]);
        
    }    scanf("%d",&p);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==p){
                
                
            printf("%d %d",a[i],a[j]);
            
             return 0;
            }
            
        }
    }
    printf("no pair");

    
    return 0;
}