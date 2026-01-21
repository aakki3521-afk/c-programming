#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,s[50],sen[100];
scanf("%c",&ch);// s
scanf(" %s",&s);// language

scanf("\n");
scanf("%[^\n]%*c",&sen);// we b n 
printf("%c\n",ch);
printf("%s\n",s);
printf("%s",sen);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
