#include <stdio.h>
int main() {
    int order,nrml,speed,charges;
    scanf("%d%d",&order,&speed);
    switch(speed){
        case 1:
        nrml=50;
        printf("order amount");
        break;
    
    case 2:
    if(order<1000){
        printf("100");
    }
    else{
        printf("free");
    }
    break;
    default:
    printf("invalid value");

    }
    return 0;
}