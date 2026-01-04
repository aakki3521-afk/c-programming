#include <stdio.h>
int main() {
    int arr[3];
    int sum=0;
    printf("enter the num");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
        //sum=sum+arr[i];
    }
    
    for(int i=0;i<3;i++){
        sum=sum+arr[i];
        //printf("%d\n",sum);
    }
    printf("%d",sum);
    
    return 0;
}