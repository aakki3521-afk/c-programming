#include<stdio.h>
#include<string.h>
int main() {
    char name[20];
    int count=0;
    //scanf("%s",name);
    fgets(name,20,stdin);
    for( int i=0;name[i]!='\0';i++){
        if(name[i]==' '){
        count++;}
    }printf("%d",count);
    
    
    return 0;
}