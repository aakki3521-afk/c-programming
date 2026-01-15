#include <stdio.h>
#include<string.h>
int main() {
    char email[50],domain[]="@company.com";
    int elen,dlen,match=1;
    fgets(email,50,stdin);
    email[strcspn(email,"\n")]='\0';
    elen=strlen(email);
    dlen=strlen(domain);
    if(elen<dlen)
    match=0;
    else{
        for( int i=0;i<dlen;i++){
            if(email[elen-dlen+i]!=domain[i]){
                match=0;
                break;
            }
        }
    }if(match){
        printf("valid");
    }else{
        printf("invalid");
    }
    return 0;
}