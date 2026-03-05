#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a[i]);
    }int *p=a;
    for(int i=0;i<n;i++){
        sum=sum+*(p+i);
    }printf("%d",sum);
    
    return 0;
}

