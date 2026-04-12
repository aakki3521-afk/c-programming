#include <stdio.h>
int main() {
int n;
int count;
scanf("%d",&n);
while(n!=0)   {
    count++;
    n=n/10;
} 
printf("%d is the count",count);
    return 0;
}