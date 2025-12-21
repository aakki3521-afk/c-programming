#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the num=");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is largest");
    }
    else if(b>c && b>a)
    {
        printf("b is gratest");
    }
    else {
        printf("c is the largest");
    }
    return 0;
}