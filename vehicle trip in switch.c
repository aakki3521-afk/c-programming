#include <stdio.h>
int main() {
    int vehicle,trip,num=0,tol;
    scanf("%d%d",&vehicle,&trip);

    switch(vehicle){
        case 1:
        if(trip==1){
            printf("100");
        }else if(trip>=2 && trip<=10){
            printf("800");
        }else{
            printf("more then 800");
        }
        break;
        case 2:
        if(trip){
            tol=trip*240;
            printf("%d",tol);
        }
    }
    
    return 0;
}