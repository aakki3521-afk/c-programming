#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int data;
    while(n>=1){
        scanf("%d",&data);
        if(data>=1){
            count++;
        }
n--;
    }
    printf("%d",count);
         
    
    
    return 0;
}