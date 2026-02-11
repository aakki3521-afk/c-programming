#include <stdio.h>
int main() {
    int clas,age,tol=0;
    scanf("%d%d",&clas,&age);
    switch(clas){
        case 1:
        //int sleper=300;
        if(age<=12){
            tol=300*50/100;
            printf("age");
        }
        else if(age>=60){
             int dis=300*0.33;
            printf("%d",300-dis);
        }
        break;
        case 2:
        //int AC=1000;
        if(age<=12){
        tol=1000*50/100;
        printf("tol");
        }
        else{
            printf("age");
        }
        break;
        default:
        printf("invalid the age ");
        

    }
return 0;
}