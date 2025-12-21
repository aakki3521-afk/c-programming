#include <stdio.h>
int main() {
    int salary;
    printf("enter the salary");
    scanf("%d",&salary);
    if(salary>=50000)
    {
        printf("%10 tax");
    }
    else{
        printf("no tax");
    }
    
    return 0;
}