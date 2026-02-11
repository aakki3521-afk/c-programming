#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int first=0;
    int second=1;
    if(1<=n){
        printf("%d",first);
    }
    if(2<=2){
        printf("%d",second);
    }
    for( int i=0;i<n;i++){
        int temp;
        temp=first+second;
        first=second;
        second=first;
    printf("%d",temp);
    }

    
    return 0;
}