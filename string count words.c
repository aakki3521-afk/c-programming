#include <stdio.h>
int main() {
    char str[50];
    fgets(str,sizeof(str),stdin);
    int space=1;
    int i;
    for( i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            space++;
        }
    }printf("%d",space);
    
    return 0;
}