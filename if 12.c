#include <stdio.h>
int main() {
    int a;
    printf("enter the num");
    scanf("%d",&a);
    if(a%2==0 && a%3==0)
    {
        printf("its divisible by 2 & 3");
    }
    else 
    {
        printf("its  not divisible by 2 and 3 ");
    }
    return 0;
}