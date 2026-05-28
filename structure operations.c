#include <stdio.h>
  int main(){
    FILE*f1;
    char c;
    printf("Data input\n\n");
    /*open the file input*/
    f1=fopen("INPUT","W");
    /*GET a character from keyboard*/
    while((c=getchar())!=EOF)
   /* Write a character to INPUT*/
   putc(c,f1);
   /*close the file INPUT */
   fclose(f1);
   printf("\nData output \n\n");
   /*Reopen the file INPUT*/
   f1=fopen("INPUT","r");
   /* Read a character from INPUT */
   while((c-getc(f1))!=EOF)
   printf("%c",c);
   fclose(f1);
  }