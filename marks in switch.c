#include <stdio.h>
int main() {
    int mark;
    scanf("%d", &mark);
    
    switch(mark/10) {
        case 10:
        case 9:
            if(mark >= 91 && mark <= 100) {
                printf("A grade");
            } else {
                printf("Invalid mark");
            }
            break;
        case 8:
            if(mark >= 81 && mark <= 90) {
                printf("B grade");
            } else {
                printf("Invalid mark");
            }
            break;
        case 7:
            if(mark >= 71 && mark <= 80) {
                printf("C grade");
            } else {
                printf("Invalid mark");
            }
            break;
        case 6:
            if(mark >= 61 && mark <= 70) {
                printf("D grade");
            } else {
                printf("Invalid mark");
            }
            break;
        case 5:
            if(mark >= 51 && mark <= 60) {
                printf("E grade");
            } else {
                printf("Invalid mark");
            }
            break;
        case 4:
            if(mark >= 41 && mark <= 50) {
                printf("F grade");
            } else {
                printf("Invalid mark");
            }
            break;
        case 3:
            if(mark >= 31 && mark <= 40) {
                printf("supplementary");
            } else if(mark >= 0 && mark <= 30) {
                printf("fail");
            } else {
                printf("Invalid mark");
            }
            break;
        case 2:
        case 1:
        case 0:
            if(mark >= 0 && mark <= 30) {
                printf("fail");
            } else {
                printf("Invalid mark");
            }
            break;
        default:
            printf("Invalid mark (out of range)");
    }
    
    return 0;
}