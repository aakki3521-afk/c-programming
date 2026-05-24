#include <stdio.h>
int main(){
/*int n;
scanf("%d",&n);
int a[n];
int sum=0;
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}for(int i=0;i<n;i++){
sum=sum+a[i];
}
printf("enter thr total marks of %d\n\n",sum);
int avg=sum/2;
printf("the average percentage of %d\n\n",avg);
*/
    char name[20];
    printf("enter the name:" );
    fgets(name,20,stdin);
//char a[10],b[10],c[10],d[10],e[10],f[10];
//scanf("%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f);
    int tel,hin,eng,mat,sci,soc;
    printf("enter the marks tel: ");
scanf("%d",&tel);
    printf("enter the marks hin: ");
    scanf("%d",&hin);
    printf("enter the marks eng: ");
    scanf("%d",&eng);
    printf("enter the marks mat: ");
    scanf("%d",&mat);
    printf("enter the marks sci: ");
    scanf("%d",&sci);
    printf("enter the marks soc: ");
    scanf("%d",&soc);

    
int sum=tel+hin+eng+mat+sci+soc;
printf(" the sub wise total marks in all subject is:%d\n",sum);
int avg=(tel+hin+eng+mat+sci+soc)/2;
printf("the sub wise the average marks is :%d\n",avg);
    




    return 0;
}