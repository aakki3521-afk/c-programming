#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a sentence : ");
    fgets(str,sizeof(str),stdin);
    if (str[0]>='a' && str[0]<='z'){
        str[0] = toupper (str[0]);
    }
    printf("output : %s",str);
    
    return 0;
}