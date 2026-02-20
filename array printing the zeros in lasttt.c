#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[50];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pas=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[pas++]=a[i];
        }
    }while(pas<n){
        a[pas++]=0;
    }for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    
    return 0;
}