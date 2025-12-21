#include <stdio.h>
int main() {
int marks ;
printf("enter the mark");
scanf("&d",&marks);
if(marks>=35 && marks<=100){
    printf("pass");
}
else if (marks>=30 && marks<=34){

printf("get pass");}
else(marks<=30); {
    printf("fail");
}
    
    return 0;
}