#include <stdio.h>
int main() {
    int temp;
    printf("enter the temperature");
    scanf("%d",&temp);
    if(temp>=30)
    {
        printf("its hot");
    }
    else
    {
        printf("its normal");
    }
    
    return 0;
}