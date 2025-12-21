#include <stdio.h>
int main() {
    int bill;
    printf("enter the  units");
    scanf("%d",&bill);
    if(bill<=100)
    {
        printf("cost 1per unit");
    }
    else{
        printf("cost 2 per unit");
    }
    
    return 0;
}