#include <stdio.h>
int main() {
    int a,i,fact=1;
    printf("enter the num");
    scanf("%d",&a);
    for(i=0;i<=a;++i){
fact*=i;
    }
printf("the factorial of %d=%d/n",a,fact);

 
    return 0;

    
}