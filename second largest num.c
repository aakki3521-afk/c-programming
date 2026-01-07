#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int m=a[0];
    int sec=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m){
            sec=m;
            m=a[i];
        }else if(a[i]>sec && sec!=m){
            sec=a[i];
        }
    }//printf("%d",m);
    printf("%d",sec);
    
    return 0;
}