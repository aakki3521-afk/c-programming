#include <stdio.h>
int main() {
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("its grade is A");
    }
    else if (marks>=75 && marks<=89){
        printf("its grade is B");
    }
    else if (marks>=50 && marks<=74){
        printf("its grade is c");
    }
    else{
        printf("its fain");
    }
    
    return 0;
}