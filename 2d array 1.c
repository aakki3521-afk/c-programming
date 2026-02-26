#include <stdio.h>
int main() {
    int r,c,max=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
    scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    printf("%d",max);printf("\n");
    
    
    return 0;
}