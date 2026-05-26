//#include <stdio.h>
//#include <ctype.h>

//#define SIZE 20

//int main() {

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


/*char line[81],character;
int c;
c=0;
printf("enter the text.press<return>at end\n");
do{
    character=getchar();
    line[c]=character;
    c++;
}while(character!='\n');
//c=c-1;
c-=1;
line[c]='\0';
printf("\n%s\n",line);*/
/*char string[20],string2[30];
int i;
printf("enter the name:   ");
printf("?");
scanf("%s",string2);
for(i=0;string2[i]!='\0';i++){
    string[i]==string[i];
    string[i]='\0';
        printf("\n");
        printf("%s\n",string[i]);
        printf("Number of characters=%d\n",i);

    

}*/
/*#include <stdio.h>

int main() {

    char string[20], string2[30];
    int i;

    printf("Enter the name: ");

    scanf("%s", string2);

    for(i = 0; string2[i] != '\0'; i++) {
        string[i] = string2[i];
    }

    string[i] = '\0';

    printf("\nCopied string: %s\n", string);

    printf("Number of characters = %d\n", i);

    return 0;
}*/



#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[30];

int vol=0;   int con=0;

fgets(str,sizeof(str),stdin);
//gets(str);

for(int i=0;str[i]!='\0';i++){
if(toupper(str[i]=='A')||toupper(str[i]=='E')||toupper(str[i]=='I')||toupper(str[i]=='O')||toupper(str[i]=='U'))
if(toupper(str[i]=='A'||toupper(str[i]=='E')))
//||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
    vol++;
else
    con++;

}
printf("the collection of the vowel characters:%d\n\n",vol);
printf("the collection of the consonent characters:%d",con);

    return 0;
}
