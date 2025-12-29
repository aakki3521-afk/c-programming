#include <stdio.h>
int main() {
    char ch;
    printf("enter the letter");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90){
        printf("its a uppercase letter");
    }
    else if (ch>=97 && ch<=122){
        printf("its lowercase");
    } else{
        printf("invalid the letter/n");
    }
    
    return 0;
}