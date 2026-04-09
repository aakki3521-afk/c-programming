#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=85){
        printf("distrinction");
    }else if(marks>=40 && marks<=84){
        printf("pass");
    }else{
        printf("fail");
    }
    
    return 0;
}