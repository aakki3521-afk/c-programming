#include <stdio.h>
#include<string.h>
int main() {
    char str[60];
    char str2[50];
    fgets(str,sizeof(str),stdin);
    strcpy(str2,str);
    char *p=str;
    printf("%s",p);
    
    return 0;
}