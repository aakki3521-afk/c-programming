#include <stdio.h>
#include<string.h>
int main() {
    char s[50];
    fgets(s,50,stdin);
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='\0' && s[i]<='9'){
            count++;
        }
    }printf("%s",count);

     
        
    
    
    
    return 0;
}