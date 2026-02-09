#include <stdio.h>
int main() {
    int type,pay,plan,upi,wa;
    scanf("%d%d",&type,&pay);
    switch(type){
        case 1:
         plan=199;
         upi=20;
         wa=0;
        pay=plan-upi-wa;
        printf("%d",pay);
        break;
        case 2:
        plan=399;
        upi=20;
        wa=0;
        pay=plan-upi-wa;
        printf("%d",pay);
        break;
default:
printf("invalid plan");
    }
    
    return 0;
}