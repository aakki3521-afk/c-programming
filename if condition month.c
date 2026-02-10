#include <stdio.h>
int main() {
    int month;
    scanf("%d",&month);
    if(month==2){
        printf("these months have 28 or 29 days");
    }else{
        printf("30 or 31 days");
    }
    
    return 0;
}