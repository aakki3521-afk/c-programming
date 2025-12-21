#include <stdio.h>
int main() {
int age;
printf("enter the age");
scanf("%d",&age);
if(age<=13){
    printf("its a child");
}else if (age>=13 && age<=25){
    printf("its an teen");
}
else{
    printf("its an adult");
}
    
    return 0;
}