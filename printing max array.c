#include <stdio.h>
int main() {
    int n;
    
    int max;
    printf("enter the max num");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
    scanf("%d",&arr[i]);     
    }
    for(int i=1;i<=n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);

    
    return 0;
}