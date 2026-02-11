#include <stdio.h>
int main() {
    int plan;
    float data;
    scanf("%d",&plan);
    scanf("%f",&data);
    switch(plan){
        case 1:
        if(data<=1){
            printf("normal speed");
        }else{
            printf("speed reduced");
        }
        break;
        case 2:
        if(data<=2){
            printf("normal speed");
        }else{
            printf("extra charges are applied");
        }
        break;
        default:
        printf("%d",data);
    }

    
    return 0;
}