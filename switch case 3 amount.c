#include <stdio.h>
int main(){
int acc,bal,amo;
scanf("%d%d%d",&acc,&bal,&amo);
switch(acc){
    case 1:
    if(bal>=amo){
    printf("transection successful");
    }
    else{
        printf("insufficient tranction");
    }
    break;
case 2:
if(amo=5000){
    printf("limit exceed");
}
else{
    printf("insufficient tranction");
}
break;
default:
printf("the invalid value");


}   
    return 0;
}