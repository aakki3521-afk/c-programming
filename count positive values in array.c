#include <stdio.h>
int main() {
    int n,price;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]<min && a[i]>0){
            min=a[i];
            p=1;

        }  
    }
    
    if(p){
        printf("no positive");
    }else{
        printf("%d",min);
    }
       

    
    
    return 0;
}