#include <stdio.h>
int main() {
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int arr1[a][b];
    int arr2[a][b];
    int arr3[a][b];
    //int arr[a],arr[b];
    for( i=0;i<a;i++){
        for(j=0;j<b;j++){
scanf("%d",&arr1[i][j]);
        }
    }
    for( i=0;i<a;i++){
        for( j=0;j<b;j++){
         scanf("%d",&arr2[i][j]);
        }
    }for( i=0;i<a;i++){
        for( j=0;j<b;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }for( i=0;i<a;i++){
        for( j=0;j<b;j++){
            printf("%d",arr3[i][j]);
    }
    }
    printf("/n");
return 0;
}