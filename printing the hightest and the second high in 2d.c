#include <stdio.h>
int main() {
    int r, c, max = 0, sec = 0, i, j;
    scanf("%d%d", &r, &c);
    int a[r][c];
    
    // Input
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Find maximum
    max = a[0][0]; // Initialize with first element
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(max < a[i][j]) {
                max = a[i][j];
            }
        }
    }
    printf("Maximum: %d\n", max);
    
    // Find second maximum
    sec = a[0][0]; // Initialize with first element
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > sec && a[i][j] < max) {
                sec = a[i][j];
            }
        }
    }
    
    printf("Second Maximum: %d\n", sec);
    
    return 0;
}