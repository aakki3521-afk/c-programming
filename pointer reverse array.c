#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
        
    }
    int *p=a;
    for(int j=n-1;j>=0;j--){
        printf("%d",*(p+j));
    }//printf("%d",*p);
    
    
    return 0;
}