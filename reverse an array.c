#include <stdio.h>
int main() {
    int arr[4];
    int n=4;
    //int n=sizeof (arr)/sizeof (arr[0]);
    printf("enter the num");
    scanf("%d",&arr[4]);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    //printf("");
    
    return 0;
}