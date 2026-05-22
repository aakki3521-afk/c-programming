#include <stdio.h>
int main(){

    char name[20];
    printf("enter the name:" );
    fgets(name,20,stdin);


    int tel,hin,eng,mat,sci,soc;
    printf("the student name is %s\n: ",name);
    printf("enter the marks tel\n: ");
scanf("%d",&tel);
    printf("enter the marks hin\n: ");
    scanf("%d",&hin);
    printf("enter the marks eng\n: ");
    scanf("%d",&eng);
    printf("enter the marks mat\n: ");
    scanf("%d",&mat);
    printf("enter the marks sci\n: ");
    scanf("%d",&sci);
    printf("enter the marks soc\n: ");
    scanf("%d",&soc);

    
int sum=tel+hin+eng+mat+sci+soc;
printf(" the  total marks in all subject is:%d\n",sum);
float avg=(tel+hin+eng+mat+sci+soc)/2;
printf(" the average marks is :%.2f\n\n\n",avg);



    printf("the report card of %s\n: ",name);

    printf("the mark gained in tel:%d\n",tel);
    printf("the mark gained in hin:%d\n",hin);
    printf("the mark gained in eng:%d\n",eng);
    printf("the mark gained in mat:%d\n",mat);
    printf("the mark gained in sci:%d\n",sci);
    printf("the mark gained in soc:%d\n",soc);

    printf("average all subject is:%d/120\n",sum);
if(sum<100 && sum>120){
 printf("the student name is %s\n: ",name);
printf("the grade is A");

}else if(sum<=70 && sum>=99){
        printf("the student name is %s\n: ",name);
printf("the grade is B");
}else{
        printf("the student name is %s: ",name);
 printf("the grade is C");
}
printf("\n\n");
    return 0;
}