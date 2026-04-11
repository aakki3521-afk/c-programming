#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[60];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int exsum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i,n;i++){
        sum=sum+a[i];
    }printf(" %d",exsum-sum);

    
    return 0;
}