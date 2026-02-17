#include <stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    int x;
    printf("target element \n");
    scanf("%d",&x);
    int arr[n];
printf("elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==x){
            count++;
        }
    }

    
    printf("%d",count);
    
    return 0;
}