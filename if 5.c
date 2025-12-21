#include <stdio.h>
int main() {
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("pass in the exam");
    }
    else{
        printf("fail in the exam");
    }
    
    return 0;
}