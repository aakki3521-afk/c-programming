#include <stdio.h>
int main() 
{
    /*int a,b;
    int *p1,*p2;
    p1=&a,p2=&b;
    char c,d;
    char *p3,*p4;
    p3=&c,p4=&d;
    float e,f;
    float *p5,*p6;
    p5=&e,p6=&f;
    //printf("The addr of a %u  and b %u \n\n",&a,&b);
    /* now the address of a and b*/
    /* incrementing pointers */
    /*p1++;
    p2++;
    printf("The addr of a %u  and b %u \n\n",&a,&b);
    printf("The addr of a %u  and b %u \n\n",p1++,p2++);

    p3++;
    p4++;

    printf("The addr of c %u and d %u \n\n",&c,&d);
    printf("The addr of c %u  and d %u \n\n",p3++,p4++);

    p5++;
    p6++;
            printf("The addr of e %u  and f %u \n\n",&e,&f);

        printf("The addr of e %u  and f %u \n\n",p3++,p4++);
*///printf("\n sum   =%d\n",sum);



 int *p;
 int x[5]={1,2,3,4,5};
 int i=0;
 p=x;
 int sum=0;
 printf("element value address\n\n");
 while(i<5){
    printf("x[%d] %u \n",*p,p);
    sum=sum+*p;//addressing the array element
    i++;//incrementing the pointer
    p++;

 }
 printf("\n sum=%d\n", sum);
printf("\n   &x[0]=%u\n",&x[0]);
printf("\n p =%u\n",p);

    return 0;
}