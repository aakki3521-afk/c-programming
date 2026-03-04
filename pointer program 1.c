#include <stdio.h>

void num(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    num(&a, &b);

    printf("a = %d b = %d", a, b);

    return 0;
}