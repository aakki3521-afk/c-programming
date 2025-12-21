#include <stdio.h>
int main() {
int sp,cp;
printf("enter the price");
scanf("%d %d",&sp,&cp);
if(sp>cp){
    printf("its profit");
}
else{
    printf("loss");
}
    
    return 0;
}