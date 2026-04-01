#include <stdio.h>
#include<string.h>
int main() {
char s[20];
int n,count=0;
scanf("%d",&n);
scanf("%s",s);
for(int i=0;s[i]!='\0';i++){
if(s[i]==' '){
 count++;
}
}

printf("%d",count);
    
    return 0;
}