#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int arr[n];
    int index=0;
    int max;
    int right;
    // printf("%d ",a[n-1]);
    arr[0]=a[n-1];
    index=1;
    for(int i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
           arr[index]=a[i];
           index++;
        }



    }
    for(int i=0;i<index;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}