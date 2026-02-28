#include <stdio.h>
 float interst(int p,int r,int t){
     float s;
 
     s=(p*r*t)/100;

  return s;
  }

int main() {
    int p,r,t;
    printf("enter the num=");
    scanf("%d %d %d",&p,&r,&t);
         float s;
         s=interst(p,t,r);
         printf("%.2f",s);
    return 0;
}