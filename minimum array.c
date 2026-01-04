#include <stdio.h>
int main() {
    int n;
    
    //int min=arr[0];
    printf("enter the num");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
    scanf("%d",&arr[i]);     
    }
    int min=arr[n];
    for(int i=1;i<=n;i++){
        if (arr[i]<min){
        //if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);

    
    return 0;
}