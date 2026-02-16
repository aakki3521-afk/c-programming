#include <stdio.h>
int main() {
    int size,a;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
       for (int j=0;j<i;j++){
         a=arr[i]<arr[j+1];
       }
    }
    printf("%d",a);
    
    return 0;
}