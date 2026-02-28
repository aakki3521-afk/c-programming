#include <stdio.h>
int num(int a){
    if(a%2==0){
        printf("even");
    }else{
        printf("odd");
    }
} 
int main() {
    int a;
    printf("enter the num");
        scanf("%d",&a);
int x=num(a);
  printf(x);


    
    return 0;
}