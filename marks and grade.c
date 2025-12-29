#include <stdio.h>
int main() {
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100){
        printf("a grade");
    }else if(marks>=60 && marks<=79){
        printf("b grade");
    }else if (marks>=45 && marks<=59){
        printf("c grade");
    }else{
        printf("fail");
    }
    
    return 0;
}