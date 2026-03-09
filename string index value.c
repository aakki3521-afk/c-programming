
#include <stdio.h>

int main() {
    char str[60];
    printf("ENTER THE STRING= ");
    fgets(str, sizeof(str), stdin);

    char target;
    printf("ENTER THE TARGET ELEMENTS= ");
    scanf(" %c", &target);

    int index = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == target){
            printf("the given index of the given string is :%d", i);

           
        }
         
    }
    return 0;
}