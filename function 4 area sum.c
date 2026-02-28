#include <stdio.h>
float num(int a){
    float area;
    area=3.14*a*a;

    return area;

}
int main() {
    int a;
    printf("enter the num= ");
    scanf("%d",&a);
    float x;
    x=num(a);
    printf("%.2f",x);
    
    
    
    return 0;
}