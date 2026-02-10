#include <stdio.h>
int main() {
    int letter;
    scanf("%d",&letter);
    if(letter>=65 && letter<=91){
        printf("UPPERCASE LETTERS");
    }else if(letter>=97 && letter<=123){
        printf("lowercase letters");
    }
    else{
        printf("numbers");
    }
    return 0;
}