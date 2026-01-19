#include <stdio.h>
#include<string.h>
int main() {
    char str[200];
    fgets(str,sizeof(str),stdin);

    if(strstr(str,"error")!=NULL){
        printf("Found\n");
    } else {
        printf("Not found\n");
    }
    
    return 0;
}