#include <stdio.h>
#include <ctype.h>

//#define SIZE 20

int main() {

    /*char letter[SIZE];
    int count;

    /* Read characters */

    /*for(count = 0; count < SIZE; count++) {
        letter[count] = getchar();
    }

    /* Display in uppercase */

    /*for(count = 0; count < SIZE; count++) {
        putchar(toupper(letter[count]));
    }*/

    /*char word1[40],word2[50],word3[40],word4[40];
    printf("enter text: /n");
    scanf("%s%s",word1,word2);
    scanf("%s",word3);
    scanf("%s",word4);
    printf("\n");
    printf("word1=%s\n word2=%s\n",word1,word2);
    printf("word3=%s\n word4=%s\n",word3,word4);
*/
/*
char word[10],word2[40];
scanf("%s%s",word,word2);
printf("the first word is: %s\n\n",word);
printf("the first word is:%s\n\n ",word2);

*/



/*char line[40];
scanf("%[1234567890]",line);
printf("%s",line);*/


char line[81],character;
int c;
c=0;
printf("enter the text.press<return>at end\n");
do{
    character=getchar();
    line[c]=character;
    c++;
}while(character!='\n');
c=c-1;
line[c]='\0';
printf("\n%s\n",line);

    return 0;
}