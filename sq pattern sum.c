#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int size = n*2 - 1;
    int i,j;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            
            int top = i;
            int left = j;
            int bottom = size-1-i;
            int right = size-1-j;

            int min = top;

            if(left < min) min = left;
            if(bottom < min) min = bottom;
            if(right < min) min = right;

            printf("%d ", n-min);
        }
        printf("\n");
    }

    return 0;
}