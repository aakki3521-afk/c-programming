#include <stdio.h>
int main() {
    int r,c,count=0,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
    scanf("%d",&a[i][j]);
        }
    }
    int temp;
    //scanf("%d",&temp);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]=temp){
                temp=a[i][j];
                count++;
            }
        }
    }    printf("%d\n",count);

    
        
    //printf("%d\n",max);


    printf("\n");
    
    
    return 0;
}