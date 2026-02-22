#include <stdio.h>
int main() {
    int a,sum=0,r;
    printf("enter the num");
    scanf("%d",&a);
    //on=a;
    while(a!=0){
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
printf("r is equal to %d\n",sum);
if (a=sum){
    printf("its a polindrome\n");
}
else {
    printf("not a polindrome\n");
}
    
    return 0;
}