#include <stdio.h>
int main() {
    int a[]={1,2,4,5,6};
    int n=6;
    
    int exsum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+a[i];
    }
    
    printf("the missing num in an array is: %d",exsum-sum);

    
    return 0;
}