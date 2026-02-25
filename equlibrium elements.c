#include <stdio.h>
int main() {
    int n,total;
    scanf("%d",&n);
    int left=0;
    int fount=0;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(int i=0;i<n;i++){
total=total-a[i];
if(left==total){
    fount=1;
    break;
}
for(int i=0;i<n;i++){
    left==left+a[i];
}
    printf("%d\n",total);
    
    }  
    return 0;
}