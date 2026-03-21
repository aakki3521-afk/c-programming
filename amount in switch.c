#include <stdio.h>
int main(){
int acc,bal,amo;
scanf("%d%d%d",&acc,&bal,&amo);
switch(acc){
    case 1:
    if(bal>=amo){
    printf("limit exceeded");
    }
    else{
        printf("limit not ecxeed");
    }
    break;
case 2:
if(amo=5000){
    printf("transection successful");
}
else{
    printf("not successful");
}
break;
default:
printf("the invalid vaiue");


}   
    return 0;
}