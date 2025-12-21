#include <stdio.h>
int main() {
    int salary;
    printf("enter the salary");
    scanf("%d",&salary);
    if(salary>=20000)
    {
        printf("2000 bonus");
    }
    else{
        printf("bonus is 100");
    }
    
    return 0;
}