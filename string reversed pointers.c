#include <stdio.h>
#include<string.h>
int main() {
    char str[60];
    
    fgets(str,60,stdin);
    printf("%s",strrev(str));
    char *p=str;
    
    printf("%s",p);
    
    return 0;
}