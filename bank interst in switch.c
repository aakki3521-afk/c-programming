#include <stdio.h>
int main() {
    int acc,year,saving;
    scanf("%d%d",&acc,&year);
    switch(acc){
        case 1:
         saving=saving*4/100;
         printf("saving");
        break;
        case 2:
        if(year<=3){
            printf("5/100");
        }
        else{
            printf("7/100");
        }
        break;
        default:
        printf("invalid value of savings");


    }

    
    return 0;
}