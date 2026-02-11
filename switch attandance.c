#include <stdio.h>
int main() {
int attendance,marks;
scanf("%d%d",&attendance,&marks);
switch(attendance){
    case 1:
    if(attendance<75){
        printf("fail");
    }else{
        printf("pass");
    }
    break;
    case 2:
    if(marks>=75){
        printf("distrinction");
    }else if(marks>50 && marks<74){
        printf("pass");
    }else{
        printf("fail");
    }
    break;
    default:
    printf("the invalid the attandance");

}
    
    return 0;
}