#include <stdio.h>
int main() {
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 && year%400){
        printf("its a leaf year");
    }
    else{
        printf("not a leaf year");
    }
    return 0;
}