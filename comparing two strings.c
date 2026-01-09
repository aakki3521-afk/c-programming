#include<stdio.h>
#include<string.h>
int main(){
    
    char s1[20];
    char s2[20];
    fgets(s1,20,stdin);
        fgets(s2,20,stdin);

    //scanf("%s",s1);
       int s= strcmp(s2,s1);
    //printf("%s\n",s2);
if(s==0){
    printf("equal");
}else{
    printf("not equal");
}
    return 0;
}